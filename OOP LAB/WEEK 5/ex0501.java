import java.util.*;
class ex0501
{
	public static void main(String args[])
	{
		double len,wid, dep,volume;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter dimensions of box");
		len=sc.nextDouble();
		wid=sc.nextDouble();
		dep=sc.nextDouble();
		box b=new box();
		b.getdata(len,wid,dep);
		volume=b.vol();
		System.out.println("Volume of the box is "+volume);
	}
}