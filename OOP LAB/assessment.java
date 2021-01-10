class manplant
{
	boolean stat;
	int id,qual;
	String n;
	float cost;
	manplant(boolean status, int prodid, String name, int quality, float price)
	{
		stat=status;
		id=prodid;
		n=name;
		qual=quality;
		cost=price;
	}
}
class qualitycheck extends manplant
{
	super(boolean status, int prodid, String name, int quality, float price);
	void check(){
	if (quality>75)
		stat=true;}
}
class release extends qualitycheck
{
	super(boolean status, int prodid, String name, int quality, float price);
	void process(){
	if(quality>75 && quality<80)
		cost=(float)cost/10.0;
	System.out.println("Product ID: "+id+"\nProduct name: "+n+"\nQuality: "+qual+"\nPrice: "+cost);}
}
public class assessment
{
	public static void main(String args[])
	{
		release ob1=new release(false, 1, p1, 77, 100);
		manplant ob2=new manplant(false, 2, p2, 60, 150);
		manplant ob3=new manplant(false, 3, p3, 90, 125);
		manplant ob4=new manplant(false, 4, p4, 85, 200);
		manplant ob5=new manplant(false, 5, p5, 95, 300);
		ob1.qualitycheck();
	}
}