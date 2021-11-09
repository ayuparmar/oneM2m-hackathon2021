#define VERSION "V1.00.02"

void setup() {
  Serial.begin(9600);
  Serial.print("Version: ");
  Serial.println(VERSION);
  wifi_setup();
  co2_setup();
  sds_setup();

}
int PM25, PM10;
void loop() {
  /* Reading all the sensor values */
  co2_loop();
  sds_loop(&PM25, &PM10);
  /* End Sensor Reding*/

  /*Connecting with http and publishing to onem2m2 server*/
  connect_http();
  publish_onem2m();

  /*End the loop*/
}
