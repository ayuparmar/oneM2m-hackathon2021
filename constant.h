// pin for pwm reading
#define CO2_IN D6

// pin for uart reading
#define MH_Z19_RX D4  // D7
#define MH_Z19_TX D0  // D6


#define SDS25_INT D8
#define SDS10_INT D7

#define WIFI_SSID "Red"
#define WIFI_PASS "88888888"

#define MAX_STRING_LEN 255


/*
 * OneM2M connection details
 */
#define CSE_IP      "onem2m.iiit.ac.in"
#define CSE_PORT    443
#define HTTPS     true
#define FINGER_PRINT  "10 3D D5 4E B1 47 DB 4B 5C B0 89 08 41 A7 A4 14 87 10 7F E8"
#define OM2M_ORGIN    "AirPoll@20:22uHt@Sas"
#define OM2M_MN       "/~/in-cse/in-name/"
#define OM2M_AE       "AE-AQ"

#define OM2M_DATA_CONT  "AQ-KN00-00/Data"
#define OM2M_DATA_LBL   "[\"AE-AQ\", \"AQ-KN00-00\", \"V3.0.02\", \"AQ-V3.0.02\"]"
