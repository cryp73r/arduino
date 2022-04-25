#include<AFMotor.h>
#include<NewPing.h>
#include<Servo.h>

//Motor Declaration
AF_DCMotor motor1(4);
AF_DCMotor motor2(3);
Servo servo;

//Sensor Pin Declaration
static int c=0;
static int f=0;
const int lir = A0;
const int cir = A1;
const int rir = A2;
const int ult = A3;
const int maxm = 400;
static float disO;
static float disL;
static float disR;

//Ultrasonic Declaration
NewPing sonar(ult, ult, maxm);

void setup() {
  // put your setup code here, to run once:
pinMode(lir, INPUT);
pinMode(cir, INPUT);
pinMode(rir, INPUT);
servo.attach(10);
}

void loop() {
  // put your main code here, to run repeatedly:

if (digitalRead(lir)==0 && digitalRead(cir)==1 && digitalRead(rir)==0)
  moveF();
  
if (digitalRead(lir)==0 && digitalRead(cir)==1 && digitalRead(rir)==1)
  {
    moveR();
    delay(10);               //change before uploading
    while (digitalRead(lir)!=0)
      moveR();
  }

if (digitalRead(lir)==1 && digitalRead(cir)==1 && digitalRead(rir)==0)
  {
    moveL();
    delay(10);
    while (digitalRead(rir)!=0)
      moveL();
  }

if (digitalRead(lir)==0 && digitalRead(cir)==0 && digitalRead(rir)==0)
 {
  if (digitalRead(lir)==1 || digitalRead(cir)==1)
        {
          moveB();
          delay(15);
          moveL();
          delay(10);
          while (digitalRead(lir)==0 && digitalRead(cir)==1 && digitalRead(rir)==0)
            moveL();
        }
 }
if (digitalRead(lir)==1 && digitalRead(cir)==1 && digitalRead(rir)==1)
  {               
    c++;
    if (c==1 || c==3)
    {
      moveR();
      delay(10);
      while (digitalRead(lir)!=0)
        moveR();
    }
    else if (c==2 || c==4)
    {
      moveL();
      delay(10);               //change before uploading
      while (digitalRead(rir)!=0)
        moveL();
    }
     else
      {
        disO=sonar.ping_cm();
        delay(100);
        if (disO>15)           // value needs to be changed:
          moveF();
        if (disO<=15)
        {
          moveB();
          delay(500);
          moveS();
          delay(50);
          disL = serL();
          disR = serR();
          if (disL>disR)
          {
            moveLL();
            delay(650);
          }
          else if (disL<disR)
          {
            moveRR();
            delay(650);
          } 
         }
        }
  }
if (digitalRead(lir)==1 && digitalRead(cir)==0 && digitalRead(rir)==0)
{
  moveL();
  delay(100);
}
if (digitalRead(lir)==0 && digitalRead(cir)==0 && digitalRead(rir)==1)
{
  moveR();
  delay(100);
}
}

float serL()
{
  float dis;
  servo.write(180);
  delay(100);
  dis=sonar.ping_cm();
  delay(100);
  servo.write(90);
  delay(100);
  return dis;
}
float serR()
{
  float dis;  
  servo.write(-20);
  delay(100);
  dis=sonar.ping_cm();
  delay(100);
  servo.write(90);
  delay(100);
  return dis;
}
void moveF() {
   // move forward:
  motor1.setSpeed(255);
  motor2.setSpeed(250);
  motor1.run(FORWARD);
  motor2.run(FORWARD);
}

void moveL() {
  // move left:
  motor1.setSpeed(105);
  motor2.setSpeed(255);
  motor1.run(BACKWARD);
  motor2.run(FORWARD);
}

void moveR()
{
  // move right:
  motor1.setSpeed(255);
  motor2.setSpeed(105);
  motor1.run(FORWARD);
  motor2.run(BACKWARD);
}
void moveLL() {
  // move left:
  motor1.setSpeed(255);
  motor2.setSpeed(255);
  motor1.run(BACKWARD);
  motor2.run(FORWARD);
}

void moveRR()
{
  // move right:
  motor1.setSpeed(255);
  motor2.setSpeed(255);
  motor1.run(FORWARD);
  motor2.run(BACKWARD);
}
void moveB()
{
  // move backward:
  motor1.setSpeed(255);
  motor2.setSpeed(255);
  motor1.run(BACKWARD);
  motor2.run(BACKWARD);
}
void moveS()
{
  // stop motors:
  motor1.setSpeed(0);
  motor2.setSpeed(0);
  motor1.run(RELEASE);
  motor2.run(RELEASE);
}
