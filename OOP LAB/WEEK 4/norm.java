import java.util.*;
class norm
{
	public static void main(String args[])
	{
		int a[][]=new int[25][25];
		int i,j,n,trace=0;
		double norm=0;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter dimensions of the matrix: ");
		n=sc.nextInt();
		System.out.println("Enter the elements: ");
		for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			a[i][j]=sc.nextInt();
		for(i=0;i<n;i++)
			trace=trace+a[i][i];
		for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			norm=norm+Math.pow(a[i][j],2);
		norm=Math.pow(norm,0.5);
		System.out.println("Trace = "+trace+" and Norm = "+norm);
	}
}