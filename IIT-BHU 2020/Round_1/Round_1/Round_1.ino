int sensor[6]={0, 0, 0, 0, 0, 0};

int b=1;
int w=0;

int error=0;

int ENA=6;
int ENB=7;
int IN1=40;
int IN2=42;
int IN3=44;
int IN4=46;

int kp;
int ki=0;
int kd;

int tot_error=0;
int del_error=0;
int last_error=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
pinMode(A5, INPUT);
pinMode(A4, INPUT);
pinMode(A3, INPUT);
pinMode(A2, INPUT);
pinMode(A1, INPUT);
pinMode(A0, INPUT);

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
