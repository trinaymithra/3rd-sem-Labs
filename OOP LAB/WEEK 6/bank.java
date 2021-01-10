import java.util.*;
class bank
{
	public static void main(String[] args)
	{
		double b,m,s,d,w;
		char c;
		String n;
		int ch;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter your name: ");
		n=sc.nextLine();
		System.out.println("Enter account number");
		long a=sc.nextLong();
		do
		{
			System.out.println("Enter account type. Enter c for current or s for savings or e to exit. Enter your choice.");
			c=sc.next().charAt(0);
			account Sob=new account(n,a,c);
			switch(c)
			{
				case 'c':
				System.out.println("Enter balance");
				b=sc.nextDouble();
				System.out.println("Enter minimum balance");
				m=sc.nextDouble();
				System.out.println("Enter service tax");
				s=sc.nextDouble();
				if(b<m)
					b=b*s/100;
				current ob1=new current(b,s,m);
				ob1.name=Sob.name;
				ob1.acc_no=Sob.acc_no;
				
				do
				{
					System.out.println("Enter 1 to deposit, 2 to withdraw, 3 to check balance, 4 to exit.");
					System.out.println("Enter your choice");
					ch=sc.nextInt();
					switch(ch)
					{
						case 1:
						System.out.println("Enter amount to be deposited");
						d=sc.nextDouble();
						ob1.dep(d);
						ob1.check();
						break;
						case 2:
						System.out.println("Enter amount to be withdrawn");
						w=sc.nextDouble();
						ob1.wdraw(w);
						ob1.check();
						break;
						case 3:
						ob1.display();
						break;
						case 4:
						break;
						default:
						System.out.println("Invalid choice");
					}
				}while(ch!=4);
				break;
				case 's':
				System.out.println("Enter balance");
				b=sc.nextDouble();
				System.out.println("Enter interest rate");
				double i=sc.nextDouble();
				savings ob2=new savings(b,i);
				ob2.name=Sob.name;
				ob2.acc_no=Sob.acc_no;
				do
				{
					System.out.println("Enter 1 to deposit, 2 to withdraw, 3 to check balance, 4 to add interest, 5 to exit.");
					System.out.println("Enter your choice");
					ch=sc.nextInt();
					switch(ch)
					{
						case 1:
						System.out.println("Enter amount to be deposited");
						d=sc.nextDouble();
						ob2.dep(d);
						break;
						case 2:
						System.out.println("Enter amount to be withdrawn");
						w=sc.nextDouble();
						ob2.wdraw(w);
						break;
						case 3:
						ob2.display();
						break;
						case 4:
						ob2.interest();
						break;
						case 5:
						break;
						default:
						System.out.println("Invalid choice");
					}
				}while(ch!=5);
				break;
				case 'e':
				break;
				default:
				System.out.println("Invalid choice");
			}
		}while(c!='e');
	}
}