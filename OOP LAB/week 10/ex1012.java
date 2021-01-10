import java.util.*;
class neg extends Exception
{
	int num;
	neg(int n)
	{
		num=n;
	}
	public String toString()
	{
		return "Negative number exception :"+num;
	}
}
public class ex1012
{
	public static void main(String args[]) throws neg
	{
		System.out.println("Enter a number: ");
		Scanner sc=new Scanner(System.in);
		int i;
		try
		{
			i=sc.nextInt();
			if(i<0)
				throw new neg(i);
			System.out.println("Square root is: "+Math.sqrt(i));
		}
		catch(neg e)
		{
			System.out.println("Exception: "+
			e);
		}
	}
}