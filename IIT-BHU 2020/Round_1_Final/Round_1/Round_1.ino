#include<AFMotor.h>


int sensor[6]={0, 0, 0, 0, 0, 0};

int b=1;
int w=0;

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);

int error=0;

float kp=10;
int ki=0;
float kd=0;

int tot_error=0;
int del_error;
int last_error=0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(A8, INPUT);
pinMode(A9, INPUT);
pinMode(A10, INPUT);
pinMode(A11, INPUT);
pinMode(A12, INPUT);
pinMode(A13, INPUT);
pinMode(A4, INPUT);
pinMode(A5, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
runAll();
}
