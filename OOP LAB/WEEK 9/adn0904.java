import java.util.*;
class adn0904
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter phone number in (xyz) xyz-wxyz format: ");
		String s=sc.nextLine();
		//System.out.println(s.length());
		String s1=s.substring(1,4);
		String s2=s.substring(6,9);
		String s3=s.substring(10);
		System.out.println("Phone number with area code seperated: "+s1+" "+s2+""+s3);
	}
}