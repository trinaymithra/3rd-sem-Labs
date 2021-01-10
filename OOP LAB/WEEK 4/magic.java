import java.util.*;
class magic
{
	public static void main(String args[])
	{
		int a[][]=new int[25][25];
		int i,j,n,rsum=0,sum1,flag=1;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the dimensions of matrix: ");
		n=sc.nextInt();	
		System.out.println("Enter the elements of matrix: ");
		for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			a[i][j]=sc.nextInt();
		i=0;
		for(j=0;j<n;j++)
			rsum=rsum+a[i][j];
		for(i=1;i<n;i++)
		{
			sum1=0;
			for(j=0;j<n;j++)
				sum1=sum1+a[i][j];
			if(sum1!=rsum)
			{
				flag=0;
				break;
			}
		}
		for(j=0;j<n;j++)
		{
			sum1=0;
			for(i=0;i<n;i++)
				sum1=sum1+a[i][j];
			if(sum1!=rsum)
			{
				flag=0;
				break;
			}
		}
		sum1=0;
		for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		if(i==j)
			sum1=sum1+a[i][j];
		if(sum1!=rsum)
			flag=0;
		sum1=0;
		for(i=0;i<n;i++)
		for(j=n-1;j>=0;j--)
		if(i+j==n-1)
			sum1=sum1+a[i][j];
		if(sum1!=rsum)
			flag=0;
		if(flag==1)
			System.out.println("Matrix is a magic square");
		else
			System.out.println("Matrix is not magic square");
	}
}	