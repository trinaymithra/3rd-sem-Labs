import java.util.*;
public class fibo
{
	public static void main(String[] args)
	{
		int n,ans;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter a number");
		n=sc.nextInt();
		fibo func=new fibo();
		ans=func.ser(n);
		System.out.println(+n+"th number in the fibonacci series is "+ans);
	}
	int ser(int n)
	{
		if(n<=1)
			return n;
		return ser(n-1)+ser(n-2);
	}
}
		