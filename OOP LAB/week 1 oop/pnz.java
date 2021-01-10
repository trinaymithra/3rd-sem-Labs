import java.util.*;
public class pnz
{
	public static void main(String[] args)
	{
		int a,i,p=0,n=0,z=0;
		Scanner sc=new Scanner(System.in);
		for(i=0;i<10;i++)
		{
			System.out.println("Enter a number");
			a=sc.nextInt();
			if (a>0)
				p++;
			else if (a<0)
				n++;
			else
				z++;
			
		}
		System.out.println("No. of positive numbers are "+p);
		System.out.println("\nNo. of negative numbers are " +n);
		System.out.println("\nNo. of zeroes are " +z);
	}
}
		