int pidVal() {

  tot_error = tot_error + error;
  del_error = error - last_error;
  int pid_speed = (kp * error) + (ki * tot_error) + (kd * del_error);
  last_error = error;
  return (pid_speed);
}
