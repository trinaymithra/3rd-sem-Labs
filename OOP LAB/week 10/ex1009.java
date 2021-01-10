import java.util.*;
class ex1009
{
	public static void main(String args[])
	{
		System.out.println("Enter Student's name, roll number and marks in three subjects: ");
		Scanner sc=new Scanner(System.in);
		String name;
		int roll, m1,m2,m3;
		float per;
		char gr;
		try
		{
			name=sc.next();
			roll=sc.nextInt();
			m1=sc.nextInt();
			m2=sc.nextInt();
			m3=sc.nextInt();
			per=(m1+m2+m3)/3.0;
			if(per>90) gr='A';
			else if(per>80) gr='B';
			else if(per>70) gr='C';
			else if(per>60) gr='D';
			else if(per>50) gr='E';
			else gr='F';
			System.out.println("Name: "+name+"\nRoll No. :"+roll+"\nPercentage: "+per+"\nGrade: "+gr);
		}
		catch(NumberFormatException e)
		{
			System.out.println("Exception: "+e);
		}
	}
}