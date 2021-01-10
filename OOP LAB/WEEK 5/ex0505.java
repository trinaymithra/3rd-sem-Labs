import java.util.*;
class ex0505
{
  public static void main(String args[])
  {
  double num;
  Scanner sc=new Scanner(System.in);
  System.out.println("Enter a number: ");
  num=sc.nextDouble();
  number n=new number(num);
  if(n.isZero())
  System.out.println("Number entered is zero");
  if(n.isPositive())
  System.out.println("Number entered is Positive");
  if(n.isNegative())
  System.out.println("Number entered is Negative");
  if(n.isOdd())
  System.out.println("Number entered is odd");
  if(n.isEven())
  System.out.println("Number entered is even");
  if(n.isArmstrong())
  System.out.println("Number entered is an armstrong number");
  }
}
