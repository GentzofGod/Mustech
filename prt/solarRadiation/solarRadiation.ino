#include <Wire.h>
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println();
int sensorValue = analogRead(A0);
float voltage = sensorValue * (5.0/1023.0);

float radiation = convertToRadiation(voltage);

String mystring;
mystring = String(voltage);

Serial.print("Voltage  " + mystring + " V    ");

String mystring2 = String(radiation);
Serial.println("Solar Radiation :  " + mystring2 + "  KiloWatts/meter-square");
delay(2000);
}

float convertToRadiation(float voltage){

  float highVolt = voltage;

  float power = (highVolt * 0.160)/1000;

  float area = 0.06 * 0.03;

  float solarRadiation = power/area ;

  return solarRadiation;



}