import java.util.*;
class compare
{
	public static void main(String args[])
	{
		int a[]=new int[10];
		int n,i,big,small;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter n: ");
		n=sc.nextInt();
		System.out.println("Enter the numbers: ");
		for(i=0;i<n;i++)
			a[i]=sc.nextInt();
		small=a[0];
		big=a[0];
		for(i=1;i<n;i++)
		{
			if(a[i]>big)
				big=a[i];
			if(a[i]<small)
				small=a[i];
		}
		System.out.println("Largest num= "+big+" and Smallest num = "+small);
	}
}