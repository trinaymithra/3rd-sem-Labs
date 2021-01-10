import java.util.*;
class search
{
	public static void main(String args[])
	{
		int a[]=new int[10];
		int n,i,key,count=0,flag=0;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter n: ");
		n=sc.nextInt();
		System.out.println("Enter the numbers: ");
		for(i=0;i<n;i++)
			a[i]=sc.nextInt();
		System.out.println("Enter the key to be searched: ");
		key=sc.nextInt();
		for(i=0;i<n;i++)
			if(key==a[i])
			{
				count++;
				flag=1;
			}
		if(flag==0)
			System.out.println("Key element not found");
		else
			System.out.println("Key found "+count+" times");
	}
}