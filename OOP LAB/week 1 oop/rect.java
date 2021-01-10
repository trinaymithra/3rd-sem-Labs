import java.util.*;
public class rect
{
	public static void main(String[] args)
	{
		int l,b,area, circumference;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter length and breadth of the rectangle");
		l=sc.nextInt();
		b=sc.nextInt();
		area=l*b;
		circumference=2*(l+b);
		System.out.println("Area of the rectangle is "+area);
		System.out.println("\nCircumference of the rectangle is " +circumference);
	}
}
		