class savings extends account
{
	double bal, irst;	
	savings()
	{
		bal=0;
		irst=0;
	}
	savings(double b,double i)
	{
		bal=b;
		irst=i;
	}
	void dep(double d)
	{
		bal=bal+d;
	}
	void wdraw(double w)
	{
		if(bal>w)
		{
			bal=bal-w;
		}
		else
		System.out.println("Insufficient balance");
	}
	void display()
	{
		System.out.println("Name : "+name);
		System.out.println("Account number : "+acc_no);
		System.out.println("Current Balance : Rs. "+bal);
	}
	void interest()
	{
			double i=irst*bal/100.0;
			System.out.println("Interest earned : Rs."+i);
			bal=bal+i;
			display();
	}
}