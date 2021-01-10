import java.util.*;
class adn0901
{
	public static void main(String args[])
	{
		int n,i,j,k;
		char temp;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter number of strings: ");
		n=sc.nextInt();
		String s[]=new String[n];
		for(k=0;k<n;k++)
		{
			System.out.println("Enter "+k+"th string: ");
			s[k]=sc.next();
		}
		System.out.println("Sorted strings are: ");
		for(k=0;k<n;k++)
		{
			char arr[]=s[k].toCharArray();
				for(i=1;i<arr.length;i++)
					for(j=0;j<(arr.length-i);j++)
						if(arr[j]>arr[j+1])
						{
							temp=arr[j];
							arr[j]=arr[j+1];
							arr[j+1]=temp;
						}
			for(i=0;i<s[k].length();i++)
				System.out.print(arr[i]);
			System.out.println();
		}
	}
}