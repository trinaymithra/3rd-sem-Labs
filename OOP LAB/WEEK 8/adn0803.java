import java.util.*;
interface sports
{
	Scanner sc=new Scanner(System.in);
	void noofgoals();
	void dispteam();
}
class hockey implements sports
{
	int g;
	String team;
	public void noofgoals()
	{
		System.out.println("Enter hockey team name: ");
		team=sc.nextLine();
		System.out.println("Enter number of goals scored: ");
		g=sc.nextInt();
	}
	public void dispteam()
	{
		System.out.println(team+" hockey team scored "+g+" goals\n");
	}
}
class football implements sports
{
	int go;
	String name;
	public void noofgoals()
	{
		System.out.println("Enter football team name: ");
		Scanner scan=new Scanner(System.in);
		name=scan.nextLine();
		System.out.println("Enter number of goals scored: ");
		go=sc.nextInt();
	}
	public void dispteam()
	{
		System.out.println(name+" football team scored "+go+" goals\n");
	}
}
public class adn0803
{
	public static void main(String args[])
	{
		sports h=new hockey();
		sports f=new football();
		h.noofgoals();
		f.noofgoals();
		h.dispteam();
		f.dispteam();
	}
}