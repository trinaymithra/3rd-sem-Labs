import java.util.*;
class even extends Exception
{
	int num;
	even(int n)
	{
		num=n;
	}
	public String toString()
	{
		return "Even number exception :"+num;
	}
}
public class adn1003
{
	public static void main(String args[]) throws even
	{
		System.out.println("Enter a number: ");
		Scanner sc=new Scanner(System.in);
		int i;
		try
		{
			i=sc.nextInt();
			if(i%2==0)
				throw new even(i);
			System.out.println(i+" is odd ");
		}
		catch(even e)
		{
			System.out.println("Exception: "+
			e);
		}
	}
}