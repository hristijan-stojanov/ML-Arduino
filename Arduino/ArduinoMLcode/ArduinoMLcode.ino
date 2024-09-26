#include "DHT.h"
#include "model.h"  

#define DHTPIN 2
#define DHTTYPE DHT11
#define ONE_HOUR 3600000  

DHT dht(DHTPIN, DHTTYPE);

unsigned long previousMillis = 0; 
float minTemp = 100.0;
float maxTemp = -100.0;

void setup() {
  Serial.begin(9600);
  dht.begin();
  Serial.println("Започнува мерењето на температура на секој час...");
}

void loop() {
  unsigned long currentMillis = millis();  

  
  if (currentMillis - previousMillis >= ONE_HOUR) {
    previousMillis = currentMillis;  

    float temp = dht.readTemperature();

    if (isnan(temp)) {
      Serial.println("Неуспешно читање од сензорот!");
      return;
    }

    
    if (temp < minTemp) {
      minTemp = temp;
    }

    if (temp > maxTemp) {
      maxTemp = temp;
    }

   
    Serial.print("Измерена температура: ");
    Serial.print(temp);
    Serial.println(" *C");

    
    Serial.print("Минимална температура досега: ");
    Serial.print(minTemp);
    Serial.println(" *C");

    Serial.print("Максимална температура досега: ");
    Serial.print(maxTemp);
    Serial.println(" *C");

    
    float predicted_minTemp = predictWithELL(minTemp);
    float predicted_maxTemp = predictWithELL(maxTemp);

    
    Serial.print("Предвидена минимална температура: ");
    Serial.print(predicted_minTemp);
    Serial.println(" *C");

    Serial.print("Предвидена максимална температура: ");
    Serial.print(predicted_maxTemp);
    Serial.println(" *C");

    
    minTemp = 100.0;
    maxTemp = -100.0;
  }
}


float predictWithELL(float current_temp) {

 model model;

   
  std::vector<float> input = {current_temp};

  
  std::vector<float> output = model.Predict(input);

  
  return output[0];  
}

