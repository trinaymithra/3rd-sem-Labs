import java.io.*;
class ex1003
{
	public static void main(String args[]) throws IOException
	{
		int i,ch=0,vo=0,li=1,wo=1;
		//File f=new File("D:/180953116/OOP LAB/week 10/q3.txt");
		try{
		FileInputStream f1=new FileInputStream("q3.txt");
		while((i=f1.read())!=-1)
		{
			if(((char)i>='A'&&(char)i<='Z')||((char)i>='a'&&(char)i<='z')) ch++;
			if((char)i=='A'||(char)i=='E'||(char)i=='I'||(char)i=='O'||(char)i=='U'||(char)i=='a'||(char)i=='e'||(char)i=='i'||(char)i=='o'||(char)i=='u') vo++;
			if((char)i=='\n') li++;
			if((char)i==' ') wo++;
			
		}
		System.out.println("No. of characters ="+ch+"\nNo. of vowels = "+vo+"\nNo. of Lines: "+li+"\nNo. of words = "+wo);
		}
		catch(Exception e)
		{
			System.out.println(e);
		}
	}
}