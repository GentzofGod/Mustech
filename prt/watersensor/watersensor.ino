#define Grove_Water_Sensor A3
#define led 9
int value = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(Grove_Water_Sensor, INPUT);
  pinMode(led,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led, HIGH);
delay(10);
value = analogRead(Grove_Water_Sensor);
digitalWrite(led,LOW);
Serial.print("Sensor Value : ");
Serial.println(value);

if(value>200){
  Serial.println("Rain is falling");
}
else{
  Serial.println("Rain is not falling");
}
delay(2000);
}
