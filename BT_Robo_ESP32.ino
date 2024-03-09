#include<BluetoothSerial.h>
BluetoothSerial b;
void setup() {
  // put your setup code here, to run once:
  b.begin("Robo");
  Serial.begin(9600);
  pinMode(23,OUTPUT);//A1
  pinMode(33,OUTPUT);//A2
  pinMode(25,OUTPUT);//En
  pinMode(26,OUTPUT);//En
  pinMode(21,OUTPUT);//B1
  pinMode(22,OUTPUT);//B2
  digitalWrite(23,LOW);//Trig
  digitalWrite(33,LOW);//Echo
  digitalWrite(21,LOW);
  digitalWrite(22,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(b.available()>0)
  {
    char d = b.read();
    if(d=='F')
    {
      digitalWrite(23,HIGH);
      digitalWrite(33,LOW);
      analogWrite(25,255);
      delay(1000);

      digitalWrite(21,HIGH);
      digitalWrite(22,LOW);
      analogWrite(26,255);
      delay(1000);
    }
    if(d=='B')
    {
      digitalWrite(23,LOW);
      digitalWrite(33,HIGH);
      analogWrite(25,255);
      delay(1000);

      digitalWrite(21,LOW);
      digitalWrite(22,HIGH);
      analogWrite(26,255);
      delay(1000);
    }
    if(d=='S')
    {
      digitalWrite(23,LOW);
      digitalWrite(33,LOW);
      analogWrite(25,255);
      delay(1000);

      digitalWrite(21,LOW);
      digitalWrite(22,LOW);
      analogWrite(26,255);
      delay(1000);
    }
    if(d == 'L')
    {
      digitalWrite(23,HIGH);
      digitalWrite(33,LOW);
      analogWrite(25,255);
      delay(1000);

     digitalWrite(21,HIGH);
     digitalWrite(22,LOW);
     analogWrite(26,255);
     delay(1000);
    }
    if(d == 'R')
    { 
      digitalWrite(26,HIGH);
      digitalWrite(22,LOW);
      analogWrite(21,255);
      delay(1000);

     digitalWrite(21,HIGH);
     digitalWrite(22,LOW);
     analogWrite(26,255);
     delay(1000);
    }
  }
}
    
     
      
    
  
 
  
