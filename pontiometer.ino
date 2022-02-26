int red =2;
int green =3;
int yellow =4;
int readvoltage = A3;
float voltage;
int delayT = 500;
float Vol;
void setup() {
   pinMode (yellow,OUTPUT);
   pinMode (red,OUTPUT);
   pinMode (green,OUTPUT);
   Serial.begin(9600);

}

void loop() {
Vol=analogRead(readvoltage);
  
  voltage = ((5.0/1023.0)* Vol);
  Serial.println("Our Voltage is..");
  Serial.println(voltage);
  Serial.println(" ");
 
  delay(delayT);
  if(voltage <=2.5)
  {
    digitalWrite (yellow,HIGH);
    digitalWrite (red,LOW);
    digitalWrite (green,LOW);
   }
   if(voltage>2.5 && voltage<3.5)
  {
    digitalWrite (green,HIGH);
    digitalWrite (red,LOW);
    digitalWrite (yellow,LOW);
  }
  if(voltage>=3.5)
  {
    digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
    digitalWrite(yellow, LOW);
  }

}
