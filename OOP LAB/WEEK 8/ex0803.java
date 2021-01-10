import java.util.*;
interface area
{
	Scanner sc=new Scanner(System.in);
	final float pi=(float)3.14;
	void calarea();
	void disp();
}
class rectangle implements area
{
	int l,b;
	public void calarea(){
	System.out.println("Enter length and breadth of rectangle: ");
	l=sc.nextInt();
	b=sc.nextInt();
	}
	public void disp(){
	System.out.println("Area of rectangle: "+(l*b));
	}
}
class circle implements area
{
	int r;
	public void calarea(){
	System.out.println("Enter radius of the circle: ");
	r=sc.nextInt();
	}
	public void disp(){
	System.out.println("Area of circle: "+(pi*r*r));
	}
}
public class ex0803
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