import java.util.*;
class student
{
	String first,last,degree;
	double reg;
	student(String f, String l, double roll, String d)
	{
		first=f;last=l;
		reg=roll;
		degree=d;
	}
	void disp()
	{
		System.out.println("Name: "+first+" "+last+"\nReg.No.: "+reg+"\nDegree: "+degree);
	}
}
public class adn0902
{
	public static void main(String args[])
	{
		int n,ch,i;
		String f,l,d,str;
		double roll;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter number of students: ");
		n=sc.nextInt();
		student s[]=new student[n];
		for(i=0;i<n;i++)
		{
			System.out.println("Enter student's first name, last name, registration number, degree: ");
			f=sc.next();
			l=sc.next();
			roll=sc.nextDouble();
			d=sc.next();
			s[i]=new student(f,l,roll,d);
		}
		System.out.println("Enter the name to be searched: ");
		str=sc.next();
		for(i=0;i<n;i++)
			if(str.equalsIgnoreCase(s[i].first)||str.equalsIgnoreCase(s[i].last))
				s[i].disp();
	}
}