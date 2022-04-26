#define pinLED 12
void setup() {
  // put your setup code here, to run once:
pinMode(pinLED,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int v = analogRead(A0);
if(v<600)digitalWrite(pinLED, HIGH);
else digitalWrite(pinLED, LOW);
Serial.println(v);
}
