import java.util.*;
interface areas
{
	Scanner sc=new Scanner(System.in);
	void calarea();
	void disp();
}
class triangle implements areas
{
	int b,h;
	public void calarea(){
	System.out.println("Enter base and  height of the triangle: ");
	b=sc.nextInt();
	h=sc.nextInt();
	}
	public void disp(){
	System.out.println("Area of rectangle: "+(0.5*h*b));
	}
}
class square implements areas
{
	int s;
	public void calarea(){
	System.out.println("Enter side of the sqaure: ");
	s=sc.nextInt();
	}
	public void disp(){
	System.out.println("Area of circle: "+(s*s));
	}
}
public class adn0802
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