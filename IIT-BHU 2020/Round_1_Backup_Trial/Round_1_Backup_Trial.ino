int IN1=4;
int IN2=5;
int IN3=10;
int IN4=11;

int b=1;
int w=0;

int sensor[6]={0, 0, 0, 0, 0};

void setup() {
  // put your setup code here, to run once:
pinMode(IN1, OUTPUT);
pinMode(IN2, OUTPUT);
pinMode(IN3, OUTPUT);
pinMode(IN4, OUTPUT);
pinMode(A8, INPUT);
pinMode(A9, INPUT);
pinMode(A10, INPUT);
pinMode(A11, INPUT);
pinMode(A12, INPUT);
pinMode(A13, INPUT);
getVal();
for(int i=10;i<=50;i++)
{
  analogWrite(IN1,i);
  analogWrite(IN2,0);
  analogWrite(IN3,i);
  analogWrite(IN4,0);
  
}
delay(10);
}

void loop() {
  // put your main code here, to run repeatedly:
getVal();
if (sensor[0]==w && sensor[1]==b && sensor[2]==b && sensor[3]==w && sensor[4]==w)                //1
  moveForward();
else if (sensor[0]==w && sensor[1]==b && sensor[2]==b && sensor[3]==b && sensor[4]==b)
  { 
    getVal();
    do {
      delay(50);
      rightsharpTurn();
      getVal();
    }while(sensor[0]!=w && sensor[1]!=b && sensor[2]!=b && sensor[3]!=w && sensor[4]!=w);
  }
 else if (sensor[0]==b && sensor[1]==b && sensor[2]==b && sensor[3]==w && sensor[4]==w)
 {
  delay(50);
  getVal();
  if (sensor[0]==w && sensor[1]==b && sensor[2]==b && sensor[3]==w && sensor[4]==w)
    moveForward();
  else
    do {
      delay(50);
      leftsharpTurn();
      getVal();
    }while(sensor[0]!=w && sensor[1]!=b && sensor[2]!=b && sensor[3]!=w && sensor[4]!=w);
 }
else if (sensor[0]==b && sensor[1]==b && sensor[2]==b && sensor[3]==b && sensor[4]==b)           //14
  {
    delay(50);
    getVal();
    if (sensor[0]==b && sensor[1]==b && sensor[2]==b && sensor[3]==b && sensor[4]==b)
    {
      delay(50);
      getVal();
      if (sensor[0]==b && sensor[1]==b && sensor[2]==b && sensor[3]==b && sensor[4]==b)
        stop_bot();
    }
    else {
    do {
      delay(50);
      rightsharpTurn();
      getVal();
    }while(sensor[0]!=w && sensor[1]!=b && sensor[2]!=b && sensor[3]!=w && sensor[4]!=w);
   }
  }
/*else if (sensor[0]==w && sensor[1]==w && sensor[2]==w && sensor[3]==w && sensor[4]==w)           //15
  {
    getVal();
    do {
      leftsharpTurn();
      getVal();
    }while(sensor[0]!=w && sensor[1]!=b && sensor[2]!=b && sensor[3]!=w && sensor[4]!=w);
  }*/
}
