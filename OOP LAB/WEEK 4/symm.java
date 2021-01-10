import java.util.*;
class symm
{
	public static void main(String args[])
	{
		int a[][]=new int[25][25];
		int i,j,n,sum=0,flag=1;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the dimensions of matrix: ");
		n=sc.nextInt();
		System.out.println("Enter the elements: ");
		for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			a[i][j]=sc.nextInt();
		mylabel:
		for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		if (a[i][j]!=a[j][i])
		{
			flag=0;
			break mylabel;
		}
		if(flag==1)
			System.out.println("Matrix is symmetric");
		else
			System.out.println("Matrix is not symmetric");
	}
}