import java.util.*;
class series
{
	public static void main(String args[])
	{
		int ch,n,i;
		float term,x;
		double sum=0;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter '1' for sine series or '2' for power series");
		ch=sc.nextInt();
		System.out.println("Enter a term upto which series is to be evaluated: ");
		n=sc.nextInt();
		if(ch==1)
		{
			System.out.println("Enter the value of x in Sin(x) in radians: ");
			x=sc.nextFloat();
			term=x;
			for(i=1;i<=2*n;i=i+2)
			{
				sum=sum+term;
				term=term*(((-1)*(x*x))/((i+1)*(i+2)));
			}
			System.out.println("Sin(x)= "+sum);
		}
		if(ch==2)
		{
			sum=0;
			for(i=1;i<=n;i++)
				sum=sum+(Math.pow(1.0/i,i));
			System.out.println("Sum of power series is "+sum);
		}
	}
}
			