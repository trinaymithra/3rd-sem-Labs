import java.util.*;
class square
{
	void cal(double n)
	{
		System.out.println(Math.pow(n,2));
	}
	public static void main(String args[])
	{
		double n;
		System.out.println("Enter a number: ");
		Scanner sc=new Scanner(System.in);
		n=sc.nextDouble();
		square sq=new square();
		sq.cal(n);
	}
}