import java.util.*;
interface company
{
	void market();
	void display();
}
class hardware implements company
{
	String cat,man;
	Scanner sc=new Scanner(System.in);
	public void market()
	{
		System.out.println("Enter category and its original manufacturer: ");
		cat=sc.nextLine();
		man=sc.nextLine();
	}
	public void display()
	{
		System.out.println("Category: "+cat+"\nOriginal manufacturer: "+man);
	}
}
class software implements company
{
	String type,OS;
	Scanner sc=new Scanner(System.in);
	public void market()
	{
		System.out.println("Enter type of software and operating system under which it works: ");
		type=sc.nextLine();
		OS=sc.nextLine();
	}
	public void display()
	{
		System.out.println("Type of software: "+type+"\nOperating system: "+OS);
	}
}
public class ex0801
{
	public static void main(String args[])
	{
		company h=new hardware();
		company s=new software();
		h.market();
		s.market();
		h.display();
		s.display();
	}
}