import java.util.*;
class armstrong
{
	public static void main(String args[])
	{
		int arr[]=new int[10];
		int n,a,i,order,arm;
		i=0;arm=0;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter a number: ");
		n=sc.nextInt();
		a=n;
		while(a>0)
		{
			arr[i]=a%10;
			a=a/10;
			i++;
		}
		order=i;
		for(i=0;i<order;i++)
			arm=arm+(int)(Math.pow(arr[i],order));
		if (arm==n)
			System.out.println("It is an armstrong number");
		else
			System.out.println("It is not an armstrong number");
	}
}
