import java.util.*;
class my extends Exception
{
	int size;
	my(int s)
	{
		size=s;
	}
	public String toString()
	{
		return "Array overflow exception :"+size;
	}
}
public class ex1008
{
	public static void main(String args[]) throws my
	{
		System.out.println("Enter size of array: ");
		Scanner sc=new Scanner(System.in);
		int i=0;
		try
		{
			i=sc.nextInt();
			if(i>5)
				throw new my(i);
		}
		catch(my e)
		{
			System.out.println("Exception: "+e);
		}
	}
}