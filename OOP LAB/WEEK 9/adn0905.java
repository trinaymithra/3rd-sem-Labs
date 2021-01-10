import java.util.*;
class adn0905
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter a 5 letter string: ");
		String s=sc.next();
		char a[]=s.toCharArray();
		int i,j,k;
		for(i=0;i<5;i++)
			for(j=0;j<5;j++)
				for(k=0;k<5;k++)
					System.out.print(a[i]+""+a[j]+""+a[k]+"\t");
	}
}