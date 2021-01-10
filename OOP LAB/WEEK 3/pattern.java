import java.util.*;
class pattern
{
	public static void main(String args[])
	{
		int i,n,j;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter a number: ");
		n=sc.nextInt();
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=i;j++)
				System.out.print(i+"\t");
			System.out.println();
		}
	}
}