import java.util.*;
class ex0503
{
  public static void main(String args[])
  {
  int hr,min,sec;
  time t1=new time();
  time t2=new time();
  time t3=new time();
  System.out.println("Enter time 1 in hh:min:sec format:");
  Scanner sc=new Scanner(System.in);
  hr=sc.nextInt();
  min=sc.nextInt();
  sec=sc.nextInt();
  t1.getdata(hr, min, sec);
  System.out.println("Enter time 2 in hh:min:sec format:");
  hr=sc.nextInt();
  min=sc.nextInt();
  sec=sc.nextInt();
  t2.getdata(hr,min,sec);
  t1.disp();
  t2.disp();
  System.out.println("Added time is: \n");
  t3.addtime(t1,t2);
  t3.disp();
  }
}