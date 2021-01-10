import java.util.*;
class mult
{
	public static void main(String args[])
	{
		int a[][]=new int[25][25];
		int b[][]=new int[25][25];
		int c[][]=new int[25][25];
		int i,j,k,m,n,p,q,sum=0,flag=1;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the dimensions of 1st matrix: ");
		m=sc.nextInt();
		n=sc.nextInt();
		System.out.println("Enter the dimensions of 2nd matrix: ");
		p=sc.nextInt();
		q=sc.nextInt();
		if(n!=p)
			System.out.println("Matrix multiplication not possible");
		else
		{	
			System.out.println("Enter the elements of 1st matrix: ");
			for(i=0;i<m;i++)
			for(j=0;j<n;j++)
				a[i][j]=sc.nextInt();
			System.out.println("Enter the elements of 2nd matrix: ");
			for(i=0;i<p;i++)
			for(j=0;j<q;j++)
				b[i][j]=sc.nextInt();
			for(i=0;i<m;i++)
			for(j=0;j<q;j++)
			{
				c[i][j]=0;
				for(k=0;k<n;k++)
					c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
			}
			System.out.println("Matrix obtained after multiplication is :\n");
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
					System.out.print(c[i][j]+"\t");
				System.out.println();
			}
		}
	}
}