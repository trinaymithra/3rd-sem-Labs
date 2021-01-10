import java.util.*;
class rate
{
	public static void main(String[] args)
	{
		int r;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter rate of interest for sbi");
		r=sc.nextInt();
		banks ob=new banks();
		sbi s=new sbi();
		icici i=new icici();
		axis a=new axis();
		banks b;
		b=ob;
		ob.getrate(r);
		b=s;
		b.getrate(r);
		s.display();
		System.out.println("Enter rate of interest for axis");
		r=sc.nextInt();
		b=ob;
		ob.getrate(r);
		
		b=a;
		b.getrate(r);
		a.display();
		System.out.println("Enter rate of interest for icici");
		r=sc.nextInt();
		b=ob;
		ob.getrate(r);
		
		b=i;
		b.getrate(r);
		i.display();
	}
}