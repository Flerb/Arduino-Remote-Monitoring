#include <SPI.h>
#include <RH_NRF24.h>

void setup(){
  Serial.begin(1200); // begins the serial connection to the computer at 1200 Baud.
  RH_NRF24 nrf24(9,10); // initialises the RH library with the CE and CSN pins on 9 and 10.
  // the following code is relatively self-explanatory
  if (nrf24.init()){
    Serial.println("Init success!");
  }
  if (nrf24.setChannel(80)){ // the channel is set to 2.48 gHz. This is above wifi channels 1, 6, and 11.
    Serial.println("Set channel success!");
  }
  if (nrf24.setRF(RH_NRF24::DataRate2Mbps, RH_NRF24::TransmitPower0dBm)){
    Serial.println("Set data rate and TX power success!");
  }
  Serial.println("Done");
}

void loop(){}


