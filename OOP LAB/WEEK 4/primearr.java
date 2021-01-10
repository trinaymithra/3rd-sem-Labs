import java.util.*;
class primearr
{
	public static void main(String args[])
	{
		int a[]=new int[10];
		int i,n,j,flag;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter n: ");
		n=sc.nextInt();
		System.out.println("Enter the numbers: ");
		for(i=0;i<n;i++)
			a[i]=sc.nextInt();
		System.out.println("Prime numbers in the array are: \n");
		i=0;
		while(i<n)
		{
			flag=1;
			for(j=2;j<a[i];j++)
				if(a[i]%j==0)
				{
					flag=0;
					break;
				}
				if(flag==1)
					System.out.print(a[i]+"\t");
			i++;
		}
	}
}