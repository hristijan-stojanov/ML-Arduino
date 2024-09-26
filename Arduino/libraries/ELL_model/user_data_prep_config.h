
---------------------------------------------------------------------- */

#ifndef USER_DATA_PREPARATION_CONFIG_H_
#define USER_DATA_PREPARATION_CONFIG_H_

/** User input features type */
#define NEUTON_NN_INPUT_TYPE NEUTON_NN_INPUT_TYPE_INT8

/** Number of unique features in the original input sample */
#define NEUTON_NN_INPUT_UNIQ_FEATURES_NUM 2

/** Number of unique features actually used by NN from the original input sample */
#define NEUTON_NN_INPUT_UNIQ_FEATURES_USED_NUM 2

/** Number of input feature samples that should be collected in the input window
 *  feature_sample = 1 * NEUTON_NN_INPUT_UNIQ_FEATURES_NUM
 */
#define NEUTON_NN_INPUT_FEATURE_WINDOW_SIZE 1

/** Number of input feature samples on that the input window is shifted */
#define NEUTON_NN_INPUT_FEATURE_WINDOW_SHIFT 0

/** Number of lag features used from input features window  */
#define NEUTON_NN_LAG_FEATURES_NUM 0

/** Determines if NN used only input unprocessed features for inference */
#define NEUTON_NN_USE_INPUT_FEATURES 1

/** Determines the presence of a unique scaling factors for each input(LAG) feature  */
#define NEUTON_NN_USE_UNIQ_INPUT_SCALING 1

/** The maximum number of extracted features that user used for all unique input features */
#define NEUTON_NN_EXTRACTED_FEATURES_NUM 0

/** Determines the presence of a unique mask for feature extraction for each unique input feature */
#define NEUTON_NN_USE_UNIQ_FEATURES_MASK 0

/** Determines if features use feature clipping */
#define NEUTON_NN_USE_FEATURE_CLIPPING 1


/** Defines statistical features to be used in the compiled library */
#define NEUTON_NN_FEATURES_EXTRACT_MIN 0
#define NEUTON_NN_FEATURES_EXTRACT_MAX 0
#define NEUTON_NN_FEATURES_EXTRACT_MIN_MAX 0
#define NEUTON_NN_FEATURES_EXTRACT_RANGE 0
#define NEUTON_NN_FEATURES_EXTRACT_MEAN 0
#define NEUTON_NN_FEATURES_EXTRACT_RMS 0
#define NEUTON_NN_FEATURES_EXTRACT_STD 0
#define NEUTON_NN_FEATURES_EXTRACT_ZCR 0
#define NEUTON_NN_FEATURES_EXTRACT_MCR 0
#define NEUTON_NN_FEATURES_EXTRACT_TCR 0
#define NEUTON_NN_FEATURES_EXTRACT_MAD 0
#define NEUTON_NN_FEATURES_EXTRACT_SKEW 0
#define NEUTON_NN_FEATURES_EXTRACT_KUR 0
#define NEUTON_NN_FEATURES_EXTRACT_MOMENTS 0
#define NEUTON_NN_FEATURES_EXTRACT_P2P_LF 0
#define NEUTON_NN_FEATURES_EXTRACT_P2P_HF 0
#define NEUTON_NN_FEATURES_EXTRACT_P2P_LF_HF 0
#define NEUTON_NN_FEATURES_EXTRACT_ABSMEAN 0
#define NEUTON_NN_FEATURES_EXTRACT_AMDF 0
#define NEUTON_NN_FEATURES_EXTRACT_P_SCR 0
#define NEUTON_NN_FEATURES_EXTRACT_N_SCR 0
#define NEUTON_NN_FEATURES_EXTRACT_PSOZ 0
#define NEUTON_NN_FEATURES_EXTRACT_PSOM 0
#define NEUTON_NN_FEATURES_EXTRACT_PSOS 0
#define NEUTON_NN_FEATURES_EXTRACT_CREST 0
#define NEUTON_NN_FEATURES_EXTRACT_RDS 0
#define NEUTON_NN_FEATURES_EXTRACT_AUTOCORR 0
#define NEUTON_NN_FEATURES_EXTRACT_HJ_MOBILITY 0
#define NEUTON_NN_FEATURES_EXTRACT_HJ_COMPLEXITY 0

/** Defines spectral features to be used in the compiled library */
#define NEUTON_NN_FEATURES_EXTRACT_SPECTR_PEAKS_FREQ 0
#define NEUTON_NN_FEATURES_EXTRACT_SPECTR_PEAKS_AMPL 0
#define NEUTON_NN_FEATURES_EXTRACT_AMPL_SPECTRUM 0

#endif /* _NEUTON_USER_DATA_PREPARATION_CONFIG_H_ */
