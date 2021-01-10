class current extends account
{
	double bal, stax, mbal;	
	current()
	{
		bal=0;
		stax=0;
		mbal=0;
	}
	current(double b,double s,double m)
	{
		bal=b;
		stax=s;
		mbal=m;
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
	void check()
	{
		if(bal<mbal)
		{
			System.out.println("Balance below minimum balance");
			double f=stax*mbal/100.0;
			System.out.println("Service tax imposed :"+f);
			bal=bal-f;
		}
	}
}