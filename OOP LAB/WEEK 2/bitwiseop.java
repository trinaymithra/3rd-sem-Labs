import java.util.*;
class bitwiseop
{
	public static void  main(String args[])
	{
		int n,mul,div;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter a number: ");
		n=sc.nextInt();
		div=n>>1;
		mul=n<<1;
		System.out.println(n+"*2="+mul+" and "+n+"/2="+div);
	}
}