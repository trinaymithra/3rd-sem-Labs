import java.util.*;
class typecast
{
	public static void main(String args[])
	{
		int a,f;
		char b;
		double c;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter an integer, a character and a double: ");
		a=sc.nextInt();
		b=sc.next().charAt(0);
		c=sc.nextDouble(); 
		byte d,e;
		d=(byte)a;
		f=(int)b;
		e=(byte)c;
		System.out.println(a+" = "+d+" ,"+b+" = "+f+" ,"+c+" = "+e);
	}
}