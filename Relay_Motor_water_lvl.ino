int relay1 = 2;
int relay2 = 3;
#define sensorPin A4
void setup() {
pinMode(relay1, OUTPUT);
pinMode(relay2, OUTPUT);
digitalWrite(relay1, HIGH);
digitalWrite(relay2, HIGH);
}
void loop() {
 int level = analogRead(sensorPin);
 if(level>=300)
  digitalWrite(relay1, HIGH);
 else
  digitalWrite(relay1, LOW);
}