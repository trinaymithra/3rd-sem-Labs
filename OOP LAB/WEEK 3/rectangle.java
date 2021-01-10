import java.util.*;
class rectangle
{
	public static void main(String args[])
	{
		int a,b;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the dimensions of the rectangle: ");
		a=sc.nextInt();
		b=sc.nextInt();
		System.out.println("Area = "+(a*b)+"sq units and Circumference = "+(2*(a+b))+" units");
	}
}