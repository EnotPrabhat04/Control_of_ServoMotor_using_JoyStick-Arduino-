#include<Servo.h>
Servo Xservo; //Creating objects for the servo motorsn
//Servo Yservo;  //if we are using 2 different SM's

int xPin=A0;
int yPin=A1;
int sPin=2;
int xVal;
int yVal;
int sVal;
int servo1Pin=9; 
//int servo2Pin=10;  for 2nd servo motor(if using)
int buzzPin=7;
int servo1;
//int servo2;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(xPin,INPUT);
  pinMode(yPin,INPUT);
  pinMode(sPin,INPUT);
  pinMode(servo1Pin,OUTPUT);
  pinMode(buzzPin,OUTPUT);
  digitalWrite(sPin,HIGH);
  Xservo.attach(servo1Pin);  //instruction for servo to attach it to X pin i.e. A0
  //Yservo.attach(yPin);

}

void loop() {
  // put your main code here, to run repeatedly:
  xVal=analogRead(xPin);
  servo1=(180./1023.)*(xVal);
  yVal=analogRead(yPin);
   //servo2=(180./1023.)*(yVal);
  sVal=digitalRead(sPin);

  Xservo.write(servo1);  //passing the value of calculated angle as the argument
  //Yservo.write(servo2);


  if(sVal==0){
    digitalWrite(buzzPin,HIGH);
  }
  else{
    digitalWrite(buzzPin,LOW);
  }


  delay(200);
  Serial.print("X value : ");
  Serial.print(xVal);
  Serial.print("Y value : ");
  Serial.print(yVal);
  Serial.print("Switch State is ");
  Serial.println(sVal);
  
}
