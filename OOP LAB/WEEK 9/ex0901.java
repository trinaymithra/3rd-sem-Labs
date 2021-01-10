import java.util.*;
class ex0901
{
	public static void main(String args[])
	{
		String str;
		int i,count=1;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter a string: ");
		str=sc.nextLine();
		System.out.println("No.of characters in the string ="+str.length());
		//String s1[]=str.split(" ");
		//System.out.println("No. of words in the string ="+s1[].length());
		for(i=0;i<str.length();i++)
			if(str.charAt(i)==' ')
				count++;
		System.out.println("No. of words in the string ="+count);
		System.out.println("No. of lines in the string = 1");
		int c=0;
		for(i=0;i<str.length();i++)
			if(str.charAt(i)=='U'||str.charAt(i)=='O'||str.charAt(i)=='I'||str.charAt(i)=='E'||str.charAt(i)=='A'||str.charAt(i)=='u'||str.charAt(i)=='o'||str.charAt(i)=='i'||str.charAt(i)=='e'||str.charAt(i)=='a')
				c++;
		System.out.println("No.of vowels in the string ="+c);
	}
}