import java.util.*;
class prdiag
{
	public static void main(String args[])
	{
		int a[][]=new int[25][25];
		int i,j,n,sum=0;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the dimensions of matrix: ");
		n=sc.nextInt();
		System.out.println("Enter the elements: ");
		for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			a[i][j]=sc.nextInt();
		System.out.println("The principal diagonol elements are: \n");
		for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		if(i==j)
		{
			System.out.print(a[i][j]+"\t");
			sum=sum+a[i][j];
			break;
		}
		System.out.println("\nSum of all non principal diagonol elements is "+sum);
	}
}