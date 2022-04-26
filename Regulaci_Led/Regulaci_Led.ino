const int LED=3;
float valorPot=0;
int pwmLed=0;
void setup() {
  
pinMode(LED,OUTPUT);
Serial.begin(9600);
}

void loop() {
// put your main code here, to run repeatedly:
 valorPot= analogRead(A0);
 pwmLed=map(valorPot,0, 1023,0,255);
  analogWrite(LED,pwmLED);
  Serial.print("Resistencia=");
  Serial.print(valorPot*10/1023);
  Serial.print("Kohms");
  Serial.print("\t Sortida PWM=");
  Serial.println(pwmLED);
  delay(20);
}
