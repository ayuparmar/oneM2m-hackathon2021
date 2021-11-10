#include <tinyECC.h>

tinyECC ecc;
char data[MAX_STRING_LEN];

void encry_setup()
{

}

int encry_loop(int *Co2, int *pm25, int *pm10)
{
  sprintf(data,
          "[%d]",
          *Co2);
  //Encryption
  ecc.plaintext = data;
  Serial.println("Indoor" + ecc.plaintext);
  ecc.encrypt();
  Serial.println("Cipher Text: " + ecc.ciphertext);
  //Signature Generation
  ecc.genSig();
  Serial.println("Signature:" + String(ecc.Sig[0]) + "," + String(ecc.Sig[1]));
//  createCI("Smart_Monitoring", "NodeMCU3", "node_data", ecc.ciphertext);

  // Check if the data instance was created.
}
