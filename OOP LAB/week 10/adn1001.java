import java.util.*;
class in extends InputMismatchException
{
	float num;
	in(float n)
	{
		num=n;
	}
	public String toString()
	{
		return "Floating point number exception :"+num;
	}
}
public class adn1001
{
	public static void main(String args[]) throws in
	{
		System.out.println("Enter numbers: ");
		Scanner sc=new Scanner(System.in);
		int i=0,sum=0;
		try
		{
			while(i!=-1)
			{
				i=sc.nextInt();
				sum+=i;
			}
			System.out.println(sum);
		}
		catch(in e)
		{
			System.out.println("Exception: "+e);
		}
	}
}