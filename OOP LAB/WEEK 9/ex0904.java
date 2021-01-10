import java.util.Scanner;
class ex0904
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		int ch, comp, i, flag;
		String s1,s2;
		char c;
		System.out.println("1. Compare two strings \n2. Toggle cases \n3. Check for substring \n4. Replace substring with 'Hello' \n5. Exit \n");
		do
		{
			ch=sc.nextInt();
			switch(ch)
			{
				case 1: 
					System.out.println("Enter two strings ");
					s1=sc.next();
					s2=sc.next();
					comp = s1.compareTo(s2);
					if(comp<0) 
						System.out.println("String 1 is less than string 2 ");
					else if
						(comp>0) System.out.println("String 1 is greater than string 2 ");
					else 	
						System.out.println("String 1 is equal to string 2 ");
					break;
					
				case 2: 
					System.out.println("Enter a string ");
					s1=sc.next();
					s2="";
					for(i=0;i<s1.length();i++)
					{
						c=s1.charAt(i);
						if(Character.isLowerCase(c)) 
							System.out.print(Character.toUpperCase(c));
						else if(Character.isUpperCase(c)) 
							System.out.print(Character.toLowerCase(c));
					}
					System.out.println();
					break;
				case 3: 
					System.out.println("Enter a string ");
					s1=sc.next();
					System.out.println("Enter substring ");
					s2=sc.next();
					flag=0;
					for(i=0;i<(s1.length()-s2.length());i++)
						if(s1.regionMatches(i,s2,0,s2.length()))
						{
							System.out.println("Substring found at "+i+"th position");
							flag=1;
							break;
						}
						if(flag==0)
							System.out.println("Substring not found");
					break;
				case 4: 
					System.out.println("Enter a string ");
					s1=sc.next();
					StringBuffer s=new StringBuffer(s1);
					System.out.println("Enter substring ");
					s2=sc.next();
					flag=0;
					for(i=0;i<(s1.length()-s2.length());i++)
						if(s1.regionMatches(i,s2,0,s2.length()))
						{
							s.replace(i,i+s2.length(),"Hello");
							flag=1;
							System.out.println("String after replacing is "+s);
							break;
						}
						if(flag==0)
							System.out.println("Substring not found");
					break;
				case 5: break;
				default: System.out.println("Invalid choice");
			}
		}while(ch!=5);
	}
}