void moveForward() {
  analogWrite(IN1, 100);
  analogWrite(IN2, 0);
  analogWrite(IN3, 104);
  analogWrite(IN4, 0);
}

void leftsharpTurn() {
  analogWrite(IN1, 0);
  analogWrite(IN2, 150);
  analogWrite(IN3, 150);
  analogWrite(IN4, 0);  
}

void rightsharpTurn() {
  analogWrite(IN1, 150);
  analogWrite(IN2, 0);
  analogWrite(IN3, 0);
  analogWrite(IN4, 150);
}

void stop_bot() {
  analogWrite(IN1, 0);
  analogWrite(IN2, 0);
  analogWrite(IN3, 0);
  analogWrite(IN4, 0);
}
