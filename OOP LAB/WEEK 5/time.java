class time
{
  int h,m,s;
  time()
  {
    h=0;
    m=0;
    s=0;
  }
  void getdata(int hr, int min, int sec)
  {
    h=hr;
    m=min;
    s=sec;
  }
  void disp()
  {
    System.out.println(h+":"+m+":"+s+"\n");
  }
  void addtime(time a, time b)
  {
    s=a.s+b.s;
    m=a.m+b.m+s/60;
    s=s%60;
    h=a.h+b.h+m/60;
    m=m%60;
  }
}
