class account
{
	protected String name;
	protected long acc_no;
	protected char type;
	account()
	{
		name="";
		acc_no=0;
		type='\0';
	}
	account(String n,long a,char t)
	{
		name=n;
		acc_no=a;
		type=t;
	}
}