import java.util.*;
class ex0702
{
	public static void main(String args[])
	{
		int ch;
		do{
		System.out.println("Enter 1 to create object, 2 to exit");
		Scanner sc=new Scanner(System.in);
		ch=sc.nextInt();
		switch (ch)
		{
			case 1:
			count ob=new count();
			break;
			case 2:
			break;
		}
		}while(ch<2);
		System.out.println("NUmber of objects created ="+count.c);
	}
}