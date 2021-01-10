class games
{
	public static void main(String[] args)
	{
		game a = new game(); 
		cricket b = new cricket(); 
		chess c = new chess(); 
		game r; 
		r = a; 
		r.display();
		r = b; 
		r.display();
		r = c; 
		r.display(); 
	}
}