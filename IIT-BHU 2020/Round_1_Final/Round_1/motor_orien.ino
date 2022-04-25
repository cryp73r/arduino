void moveForward() {
   // move forward:
  motor1.setSpeed(200);
  motor2.setSpeed(200);
  motor1.run(FORWARD);
  motor2.run(FORWARD);
}

void leftTurn(int lms, int rms) {
  // move left:
  motor1.setSpeed(lms);
  motor2.setSpeed(rms);
  motor1.run(BACKWARD);
  motor2.run(FORWARD);
}

void rightTurn(int lms, int rms)
{
  // move right:
  motor1.setSpeed(lms);
  motor2.setSpeed(rms);
  motor1.run(FORWARD);
  motor2.run(BACKWARD);
}

void stop_bot()
{
  // move backward:
  motor1.setSpeed(0);
  motor2.setSpeed(0);
  motor1.run(FORWARD);
  motor2.run(FORWARD);
}
