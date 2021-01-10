import java.util.*;
class ex0502
{
	public static void main(String args[])
	{
  	String empname, place;
  	double salary, allowance, rent;
  	employee emp=new employee();
  	System.out.println("Enter employee name, city, basic salary, DA%, HRA%");
  	Scanner sc=new Scanner(System.in);
  empname=sc.nextLine();
  place=sc.nextLine();
  salary=sc.nextDouble();
  allowance=sc.nextDouble();
  rent=sc.nextDouble();
  emp.getdata(empname, place, salary, allowance, rent);
  emp.calculate();
  emp.display();
}
}
