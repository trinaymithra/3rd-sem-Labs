import java.util.*;
class ex0902
{
	public static void main(String args[])
	{
		String word;
		int i,high,pos=0;
		char ch;
		System.out.println("Enter a word in uppercase letters: ");
		Scanner sc=new Scanner(System.in);
		word=sc.nextLine();
		int a[]=new int[26];
		for(i=0;i<26;i++)
			a[i]=0;
		for(i=0;i<word.length();i++)
			a[(int)word.charAt(i)-65]++;
		high=a[0];
		for(i=1;i<26;i++)
			if(high<a[i])
				{high=a[i];pos=i;}
		ch=(char)(pos+65);
		for(i=0;i<word.length();i++)
		System.out.print(ch);
	}
}