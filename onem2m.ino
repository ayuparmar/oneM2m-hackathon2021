#include "constant.h"

int publish_onem2m()
{
  char data[MAX_STRING_LEN];

  sprintf(data,
          "[%d,%d,%d]",
          ppm_pwm, PM25, PM10); // 0 --> data from primary buffer
  // 1 --> data from secondary



  //String req_data = String() + "{\"m2m:cin\":{\"con\":\"" + data + "\"}}";
  String req_data = String() + "{\"m2m:cin\": {"

                    + "\"con\": \"" + data + "\","

                    + "\"lbl\": " + OM2M_DATA_LBL + ","

                    + "\"cnf\": \"text\""

                    + "}}";
  Serial.println(req_data);

  String link = String() + OM2M_MN + OM2M_AE + "/" + OM2M_DATA_CONT;
  Serial.print("onem2m ae/mn/node: ");
  Serial.println(link);
  String req = String() + "POST " + link + " HTTP/1.1\r\n" +
               "Host: " + CSE_IP + "\r\n" +
               "X-M2M-Origin:" + OM2M_ORGIN + "\r\n" +
               "Content-Type:application/json;ty=" + 4 + "\r\n" +
               "Content-Length: " + req_data.length() + "\r\n" +
               "Connection: close\r\n\n" +
               req_data;
  return post_request(req);
}
