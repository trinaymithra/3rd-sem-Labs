import java.util.*;
class bikes
{
	public static void main(String[] args)
	{
		int s;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter speedlimit for splendor");
		s=sc.nextInt();
		bike ob=new bike();
		splendor sp=new splendor();
		bike b;
		b=ob;
		b.run(s);
		b=sp;
		b.run(s);
	}
}
