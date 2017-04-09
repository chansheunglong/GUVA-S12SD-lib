#include <GUVA_S12SD.h>
#define S12SDpin 0

GUVA_S12SD guva_s12sd;

void setup()   {
  //Start Serial
  Serial.begin(9600);

  //Set the input pin for GUVA S12SD (Analog Pin)
  guva_s12sd.initialize(S12SDpin);
  Serial.print("GUVA S12SD at Pin A");
  Serial.println(S12SDpin);
  Serial.println("---------------------");
}


void loop() {
  //Get the UV Index, from 0 to 11
  Serial.print("UV Index = ");
  Serial.println(guva_s12sd.UVIndex());

  //Sensor Voltage
  Serial.print("Sensor Voltage = ");
  Serial.println(guva_s12sd.voltage());

  //Sensor Value
  Serial.print("Sensor Value = ");
  Serial.println(guva_s12sd.value());

  //Empty
  Serial.println();
  delay(2000);
}