import java.util.*;
abstract class area
{
	Scanner sc=new Scanner(System.in);
	final float pi=(float)3.14;
	int l,b;
	int r;
	abstract void calarea();
	abstract void disp();
}
class rectangle extends area
{
	//overriding the abstract classes
	void calarea(){
	System.out.println("Enter length and breadth of rectangle: ");
	l=sc.nextInt();
	b=sc.nextInt();
	}
	void disp(){
	System.out.println("Area of rectangle: "+(l*b));
	}
}
class circle extends area
{
	//overriding the abstract classes
	void calarea(){
	System.out.println("Enter radius of the circle: ");
	r=sc.nextInt();
	}
	void disp(){
	System.out.println("Area of circle: "+(pi*r*r));
	}
}
public class ex0802
{
	public static void main(String args[])
	{
		area r=new rectangle();
		area c=new circle();
		r.calarea();
		c.calarea();
		r.disp();
		c.disp();
	}
}