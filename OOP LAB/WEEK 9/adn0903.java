import java.util.*;
class adn0903
{
	public static void main(String args[])
	{
		int i;
		String s[]=new String[6];
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter 5 strings: ");
		for(i=0;i<=4;i++)
			s[i]=sc.next();
		for(i=0;i<4;i++)
			s[i+1]=s[i].concat(s[i+1]);
		System.out.println("Concatenated string is: "+s[4]);
	}
}