void driverBugl(int left_motor, int right_motor) {
  int i;
  int j;
  for (i=40, j=40; i<=left_motor, j<=right_motor; i++, j++)
    leftTurn(i, j);
}


void driverBugr(int left_motor, int right_motor) {
  int i;
  int j;
  for (i=40, j=40; i<=left_motor, j<=right_motor; i++, j++)
    rightTurn(i, j);
}

void driverBugf() {
  int i;
  int j;
  for (i=40, j=40; i<=150, j<=150; i++, j++)
    leftTurn(i, j);
}
