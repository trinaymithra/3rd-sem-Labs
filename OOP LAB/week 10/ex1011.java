import java.util.*;
class valid extends Exception
{
	valid(){}
	public String toString()
	{
		return "Matrix is not valid";
	}
}
public class ex1011
{
	public static void main(String args[]) throws valid
	{
		System.out.println("Enter number of rows and columns in a matrix: ");
		Scanner sc=new Scanner(System.in);
		int r,c;
		try
		{
			r=sc.nextInt();
			c=sc.nextInt();
			if(r!=c)
				throw new valid();
			System.out.println("Matrix is valid");
		}
		catch(valid e)
		{
			System.out.println("Exception: "+e);
		}
	}
}