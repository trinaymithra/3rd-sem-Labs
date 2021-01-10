class pg extends student
{
	int sem;
	double fees;
	pg()
	{
		sem=0;
		fees=0.0;
	}
	pg(int s,double f)
	{
		sem=s;
		fees=f;
	}
	void display()
	{
		System.out.println("Name : "+name);
		System.out.println("Age : "+age);
		System.out.println("Semester : "+sem);
		System.out.println("Fees : Rs. "+fees);
	}
}