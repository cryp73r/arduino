#include<AFMotor.h>

//Motor Declaration
AF_DCMotor motor1(4);
AF_DCMotor motor2(3);

//Sensor Pin Declaration
static int flag=0;
const int lldr =A4;
const int rldr =A5;

void setup() {
  // put your setup code here, to run once:
pinMode(lldr, INPUT);
pinMode(rldr, INPUT);
Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:

if(digitalRead(lldr)==0 && digitalRead(rldr)==1)
{
moveL();
delay(50);
moveF();
delay(20);
}

if(digitalRead(lldr)==1 && digitalRead(rldr)==0)
{
moveR();
delay(50);
moveF();
delay(20);
}

if(digitalRead(lldr)==0 && digitalRead(rldr)==0)
{
if(flag==0)
{
moveR();
delay(50);
moveF();
delay(20);
flag=1;
Serial.println(flag);
delay(2000);
}
else
{
moveL();
delay(50);
moveF();
delay(20);
flag=0;
Serial.println(flag);
delay(2000);
}
}

if(digitalRead(lldr)==1 && digitalRead(rldr)==1)
{
moveF();
delay(20);
}  
}

void moveF() {
   // move forward:
  motor1.setSpeed(150);
  motor2.setSpeed(150);
  motor1.run(FORWARD);
  motor2.run(FORWARD);
}

void moveL() {
  // move left:
  motor1.setSpeed(100);
  motor2.setSpeed(200);
  motor1.run(BACKWARD);
  motor2.run(FORWARD);
}

void moveR()
{
  // move right:
  motor1.setSpeed(200);
  motor2.setSpeed(100);
  motor1.run(FORWARD);
  motor2.run(BACKWARD);
}

void moveB()
{
  // move backward:
  motor1.setSpeed(200);
  motor2.setSpeed(200);
  motor1.run(BACKWARD);
  motor2.run(BACKWARD);
}
