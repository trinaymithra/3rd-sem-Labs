import java.util.*;
abstract class areas
{
	Scanner sc=new Scanner(System.in);
	int b,h;
	int s;
	abstract void calarea();
	abstract void disp();
}
class triangle extends areas
{
	//overriding the abstract classes
	void calarea(){
	System.out.println("Enter base and height of triangle: ");
	b=sc.nextInt();
	h=sc.nextInt();
	}
	void disp(){
	System.out.println("Area of triangle: "+(0.5*b*h));
	}
}
class square extends areas
{
	//overriding the abstract classes
	void calarea(){
	System.out.println("Enter side of the square: ");
	s=sc.nextInt();
	}
	void disp(){
	System.out.println("Area of square: "+(s*s));
	}
}
public class adn0801
{
	public static void main(String args[])
	{
		areas t=new triangle();
		areas sq=new square();
		t.calarea();
		sq.calarea();
		t.disp();
		sq.disp();
	}
}