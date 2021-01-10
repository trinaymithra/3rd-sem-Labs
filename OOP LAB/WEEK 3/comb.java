import java.util.*;
class comb
{
	public static void main(String args[])
	{
		int i,j,k,l,ch;
		int a[]=new int[4];
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter any four different digits: ");
		for(i=0;i<4;i++)
			a[i]=sc.nextInt();
		System.out.println("Press '1' for combinations without repitition or '2' for with repitition");
		ch=sc.nextInt();
		if(ch==1)
			for(i=0;i<4;i++)
				for(j=0;j<4;j++)
					for(k=0;k<4;k++)
						for(l=0;l<4;l++)
							if(!(a[i]==a[j] || a[i]==a[k] || a[i]==a[l] || a[j]==a[k] || a[j]==a[l] || a[k]==a[l]))
								System.out.print(a[i]+""+a[j]+""+a[k]+""+a[l]+"\t");
		if(ch==2)
			for(i=0;i<4;i++)
				for(j=0;j<4;j++)
					for(k=0;k<4;k++)
						for(l=0;l<4;l++)
							System.out.print(a[i]+""+a[j]+""+a[k]+""+a[l]+"\t");
	}
}