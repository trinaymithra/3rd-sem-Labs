import java.util.*;
class ternary
{
	public static void main(String args[])
	{
		int a,b,c,small,big;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter any three numbers: ");
		a=sc.nextInt();
		b=sc.nextInt();
		c=sc.nextInt();
		big=(a>b)?((a>c)?a:c):((b>c)?b:c);
		small=(a<b)?((a<c)?a:c):((b<c)?b:c);
		System.out.println("Smallest number is "+small+" and largest number is "+big);
	}
}