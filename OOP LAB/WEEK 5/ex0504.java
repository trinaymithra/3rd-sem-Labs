import java.util.*;
class ex0504
{
  public static void main(String args[])
  {
  int real,imag,a,ch;
  complex c=new complex();
  complex d=new complex();
  Scanner sc=new Scanner(System.in);
  System.out.println("Enter real and imaginary parts of complex number");
  real=sc.nextInt();
  imag=sc.nextInt();
  c.getdata(real,imag);
  System.out.println("Enter '1' to enter integer, '2' to enter complex number: ");
  ch=sc.nextInt();
  if(ch==1)
  {
    System.out.println("Enter an integer: ");
    a=sc.nextInt();
    d.add(a,c);
    System.out.println("Sum is : \n");
    d.display();
  }
  if(ch==2)
  {
    System.out.println("Enter real and imaginary parts of complex number");
    real=sc.nextInt();
    imag=sc.nextInt();
    d.getdata(real,imag);
    System.out.println("Sum is : \n");
    complex e=new complex();
    e.add(c,d);
    e.display();
  }
  }
}
