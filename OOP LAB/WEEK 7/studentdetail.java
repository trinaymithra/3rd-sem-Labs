class studentdetail
{
	String name,clg,id;
	//long id;
	studentdetail()
	{
		name="";
		id="";
		clg="MIT";
	}
	void getdata(String student, String reg)
	{
		name=student;
		id=reg;
		clg="MIT";
	}
	void display()
	{
		System.out.println("Student: "+name+"\nID: "+id+"\nCollege: "+clg+"\n");
	}
}