import java.util.*;
class calc
{
	public static void main(String args[])
	{
		float a,b,c=0;
		char op,ch;
		Scanner sc=new Scanner(System.in);
		do
		{
			System.out.println("Enter a number and an operator and again a number: ");
			a=sc.nextFloat();
			op=sc.next().charAt(0);
			b=sc.nextFloat();
			switch(op)
			{
				case '+':
					c=a+b;
					break;

				case '-':
					c=a-b;
					break;

				case '*':
					c=a*b;
					break;

				case '/':
					c=a/b;
					break;
			}
			System.out.println(a+" "+op+" "+b+" = "+c);
			System.out.println("If you want to carry out another operation, press 'y', to exit press 'n': ");
			ch=sc.next().charAt(0);
		}while(ch=='y');
	}
}