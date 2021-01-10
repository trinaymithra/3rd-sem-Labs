import java.util.*;
class ex0903
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		int ch,i,j;
		char temp;
		String s1,s2;
		System.out.println("Enter your choice\n1.Check for palindrome\n2.Write in alphabetical order\n3.Reverse\n4.Concatenate original and reversed string\n5.Exit\n");
		do
		{
			ch=sc.nextInt();
			switch(ch)
			{
				case 1:
					System.out.println("Enter a string: ");
					s1=sc.next();
					StringBuffer str=new StringBuffer(s1);
					if(s1.equals((str.reverse()).toString()))
						System.out.println("String is a palindrome");
					else
						System.out.println("String is not a palindrome");
					break;
				case 2:
					System.out.println("Enter a string: ");
					s1=sc.next();
					char arr[]=s1.toCharArray();
					for(i=1;i<arr.length;i++)
						for(j=0;j<(arr.length-i);j++)
							if(arr[j]>arr[j+1])
							{
								temp=arr[j];
								arr[j]=arr[j+1];
								arr[j+1]=temp;
							}
					System.out.println("Sorted string is: ");
					for(i=0;i<s1.length();i++)
						System.out.print(arr[i]);
					System.out.println();
					break;
				case 3:
					System.out.println("Enter a string: ");
					s1=sc.next();
					StringBuffer s=new StringBuffer(s1);
					System.out.println("Reversed string is "+s.reverse());
					break;
				case 4:
					System.out.println("Enter a string: ");
					s1=sc.next();
					StringBuffer s3=new StringBuffer(s1);
					s3.reverse();
					s2 = s3.toString();
					String s4=s1.concat(s2);
					System.out.println("String concatenated with its reverse is: "+s4);
					break;
				case 5: break;
				default: System.out.println("Invalid choice!");
			}
		}while(ch!=5);
	}
}