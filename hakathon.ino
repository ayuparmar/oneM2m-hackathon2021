#define VERSION "V1.00.03"

int PM25, PM10;
int CO2;
void setup() {
  Serial.begin(9600);
  Serial.print("Version: ");
  Serial.println(VERSION);
  wifi_setup();
  co2_setup();
  sds_setup();

}

void loop() {
  /* Reading all the sensor values */
  co2_loop(&CO2);
  sds_loop(&PM25, &PM10);
  /* End Sensor Reading*/

  //Encryption
  encry_loop(&CO2, &PM25, &PM10);
  /*Connecting with http and publishing to onem2m2 server*/
  connect_http();
  publish_onem2m();

  /*End the loop*/
}
