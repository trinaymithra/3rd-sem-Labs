import java.util.*;
class ex1010
{
	public static void main(String args[])
	{
		int i;
		System.out.println("Enter a number: ");
		Scanner sc=new Scanner(System.in);
		try
		{
			i=sc.nextInt();
			int j=i/0;
			System.out.println(j);
		}
		catch(ArithmeticException e)
		{
			System.out.println("Exception: "+e);
		}
	}
}