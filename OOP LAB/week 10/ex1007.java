import java.util.*;
class ex1007
{
	public static void main(String args[])
	{
		System.out.println("Enter a string: ");
		Scanner sc=new Scanner(System.in);
		String s;
		s=sc.next();
		try
		{
			int i=Integer.parseInt(s);
			System.out.println(i);
		}
		catch(Exception e)
		{
			System.out.println("Exception: "+e);
		}
	}
}