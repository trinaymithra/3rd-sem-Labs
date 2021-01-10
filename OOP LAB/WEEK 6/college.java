import java.util.*;
class college
{
	public static void main(String[] args)
	{
		String n;
		int a,ch,s;
		double f;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter name");
		n=sc.nextLine();
		System.out.println("Enter age");
		a=sc.nextInt();
		student ob=new student(n,a);
		System.out.println("Enter 1 for ug student. Enter 2 for pg student.Enter your choice");
		ch=sc.nextInt();
		switch(ch)
		{
			case 1:
			System.out.println("Enter semester");
			s=sc.nextInt();
			System.out.println("Enter fees");
			f=sc.nextDouble();
			ug ob1=new ug(s,f);
			ob1.name=ob.name;
			ob1.age=ob.age;
			ob1.display();
			break;
			case 2:
			System.out.println("Enter semester");
			s=sc.nextInt();
			System.out.println("Enter fees");
			f=sc.nextDouble();
			pg ob2=new pg(s,f);
			ob2.name=ob.name;
			ob2.age=ob.age;
			ob2.display();
			break;
			default:
			System.out.println("Invalid choice");
		}
	}
}