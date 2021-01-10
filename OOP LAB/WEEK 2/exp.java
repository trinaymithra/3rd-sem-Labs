import java.util.*;
class exp
{
	public static void main(String args[])
	{
		int a,b,c;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter two numbers: ");
		a=sc.nextInt();
		b=sc.nextInt();
		c=(a << 2) + (b >> 2);
		System.out.println("c="+c);
		c=(b > 0);
		System.out.println("c="+c);
		c=(a + b * 100) / 10; 
		System.out.println("c="+c);
		c=a & b;
		System.out.println("c="+c);
	}
}