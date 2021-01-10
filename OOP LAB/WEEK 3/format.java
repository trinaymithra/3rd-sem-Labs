import java.util.*;
class format
{
	public static void main(String args[])
	{
		int i,j,k=0,n;
		System.out.println("Enter number of lines: ");
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=i;j++)
			{
				k++;
				System.out.print(k+"\t");
			}
			System.out.println();
		}
	}
}