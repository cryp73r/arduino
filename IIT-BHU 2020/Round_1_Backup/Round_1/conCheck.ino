void conCheck() {
  getVal();
if (sensor[0]==w && sensor[1]==w && sensor[2]==b && sensor[3]==b && sensor[4]==w && sensor[5]==w)           //1
  error=0;
else if (sensor[0]==b && sensor[1]==w && sensor[2]==w && sensor[3]==w && sensor[4]==w && sensor[5]==w)           //2
  error=10;
else if (sensor[0]==w && sensor[1]==w && sensor[2]==w && sensor[3]==w && sensor[4]==w && sensor[5]==b)           //3
  error=-10;
else if (sensor[0]==b && sensor[1]==b && sensor[2]==w && sensor[3]==w && sensor[4]==w && sensor[5]==w)           //4
  error=20;
else if (sensor[0]==w && sensor[1]==b && sensor[2]==b && sensor[3]==w && sensor[4]==w && sensor[5]==w)           //5
  error=40;
else if (sensor[0]==w && sensor[1]==w && sensor[2]==w && sensor[3]==b && sensor[4]==b && sensor[5]==w)           //6
  error=-40;
else if (sensor[0]==w && sensor[1]==w && sensor[2]==w && sensor[3]==w && sensor[4]==b && sensor[5]==b)           //7
  error=-20;
else if (sensor[0]==b && sensor[1]==b && sensor[2]==b && sensor[3]==w && sensor[4]==w && sensor[5]==w)           //8
  error=30;
else if (sensor[0]==w && sensor[1]==w && sensor[2]==w && sensor[3]==b && sensor[4]==b && sensor[5]==b)           //9
  error=-30;
else if (sensor[0]==b && sensor[1]==b && sensor[2]==b && sensor[3]==b && sensor[4]==w && sensor[5]==w)           //10
  error=50;
else if (sensor[0]==w && sensor[1]==w && sensor[2]==b && sensor[3]==b && sensor[4]==b && sensor[5]==b)           //11
  error=-50;
else if (sensor[0]==b && sensor[1]==b && sensor[2]==b && sensor[3]==b && sensor[4]==b && sensor[5]==w)           //12
  error=60;
else if (sensor[0]==w && sensor[1]==b && sensor[2]==b && sensor[3]==b && sensor[4]==b && sensor[5]==b)           //13
  error=-60;
else if (sensor[0]==b && sensor[1]==b && sensor[2]==b && sensor[3]==b && sensor[4]==b && sensor[5]==b)           //14
  error=-55;
else if (sensor[0]==w && sensor[1]==w && sensor[2]==w && sensor[3]==w && sensor[4]==w && sensor[5]==w)           //15
  error=80;
}
