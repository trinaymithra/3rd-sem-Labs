import java.util.*;
class prime
{
	public static void main(String args[])
	{
		int m,n,prime,i,j;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the limits: ");
		m=sc.nextInt();
		n=sc.nextInt();
		System.out.println("Prime numbers between those entered limits are: ");
		for(i=m;i<=n;i++)
		{
			prime=1;
			for(j=2;j<=i/2;j++)
				if(i%j==0)
				{
					prime=0;
			 		break;
				}
			if(prime==1)
				System.out.print(i+"\t");
		}
	}
}			