int sensor[6]={0, 0, 0, 0, 0, 0};

int b=1;
int w=0;
int i;

int error=0;

int ENA=6;
int ENB=7;
int IN1=40;
int IN2=42;
int IN3=44;
int IN4=46;

int left_motor_speed;
int right_motor_speed;

int kp;
int ki=0;
int kd;

int tot_error;
int del_error;
int last_error;

void setup() {
  // put your setup code here, to run once:
pinMode(A0, INPUT);
pinMode(A1, INPUT);
pinMode(A2, INPUT);
pinMode(A3, INPUT);
pinMode(A4, INPUT);
pinMode(A5, INPUT);

pinMode(ENA, OUTPUT);
pinMode(ENB, OUTPUT);
pinMode(IN1, OUTPUT);
pinMode(IN2, OUTPUT);
pinMode(IN3, OUTPUT);
pinMode(IN4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
runAll();
}
