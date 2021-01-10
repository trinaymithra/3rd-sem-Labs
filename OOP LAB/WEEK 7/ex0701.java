import java.util.*;
class ex0701
{
	public static void main(String args[])
	{
		String student,reg;
		//long reg;
		int n,i;
		System.out.println("Enter number of students: \n");
		Scanner sc=new Scanner(System.in);
		Scanner sn=new Scanner(System.in);
		n=sc.nextInt();
		studentdetail a[]=new studentdetail[n];
		for(i=0;i<n;i++)
			a[i]=new studentdetail();
		for(i=0;i<n;i++)
		{
			System.out.println("Enter student's name and id number\n");
			student=sc.next();
			reg=sn.next();
			a[i].getdata(student,reg);
		}
		for(i=0;i<n;i++)
			a[i].display();
	}
}