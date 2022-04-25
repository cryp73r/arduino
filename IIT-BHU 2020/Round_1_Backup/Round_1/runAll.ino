 void runAll() {
 conCheck();
 if (error==0)
  moveForward();
 else if (error==10 || error ==20 || error==30 || error==40 || error==60)
 {
  do {
    conCheck();
    left_motor_speed = 127 - pidVal();
    right_motor_speed = 127 + pidVal();
    if (right_motor_speed>255)
      right_motor_speed=255;
    leftTurn(left_motor_speed, right_motor_speed);
  }while(error!=0);
 }
 else if (error==-10 || error ==-20 || error==-30 || error==-40 || error==-60)
 {
  do {
    conCheck();
    left_motor_speed = 127 - pidVal();
    right_motor_speed = 127 + pidVal();
    if (left_motor_speed>255)
      left_motor_speed=255;
    rightTurn(left_motor_speed, right_motor_speed);
  }while(error!=0);
 }
 else if (error==50)
 {
  delay(30);
  do {
    conCheck();
    left_motor_speed = 127 - pidVal();
    right_motor_speed = 127 + pidVal();
    if (right_motor_speed>255)
      right_motor_speed=255;
    leftTurn(left_motor_speed, right_motor_speed);
  }while(error!=0);
 }
 else if (error==-50 || error==-55)
 {
  delay(30);
  do {
    conCheck();
    left_motor_speed = 127 - pidVal();
    right_motor_speed = 127 + pidVal();
    if (left_motor_speed>255)
      left_motor_speed=255;
    rightTurn(left_motor_speed, right_motor_speed);
  }while(error!=0);
 }
 else if (error==-55)
 {
  delay(30);
  conCheck();
  if (error==-55)
    {
      delay(10);
      conCheck();
      if (error==-55)
        stop_bot();
    }
  else {
    do {
      conCheck();
      left_motor_speed = 127 - pidVal();
      right_motor_speed = 127 + pidVal();
      if (left_motor_speed>255)
        left_motor_speed=255;
      rightTurn(left_motor_speed, right_motor_speed);
    }while(error!=0);
  }
 }
 else if (error==80)
 {
  do {
    conCheck();
    left_motor_speed = 255;
    right_motor_speed = 255;
    leftTurn(left_motor_speed, right_motor_speed);
  }while(error!=0);
 }
}
