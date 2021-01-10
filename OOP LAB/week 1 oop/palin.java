import java.util.*;
public class palin
{
	public static void main(String[] args)
	{
		int num,a,b=0;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter a number: ");
		num=sc.nextInt();
		a=num;
		while(a>0)
		{
			b=b*10+a%10;
			a=a/10;
		}
		if (b==num)
			System.out.println(num+" is a palindrome");
		else
			System.out.println(num+" is not a palindrome");
	}
}