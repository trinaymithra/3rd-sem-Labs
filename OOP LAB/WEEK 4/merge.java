import java.util.*;
class merge
{
	public static void main(String args[])
	{
		int a[]=new int[10];
		int b[]=new int[10];
		int c[]=new int[20];
		int m,n,l,i,j,pass,small,pos;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter number of elements in 1st array: ");
		m=sc.nextInt();
		System.out.println("Enter the elements: ");
		for(i=0;i<m;i++)
			a[i]=sc.nextInt();
		System.out.println("Enter number of elements in 2nd array: ");
		n=sc.nextInt();
		System.out.println("Enter the elements: ");
		for(i=0;i<n;i++)
			b[i]=sc.nextInt();
		l=m+n;
		for(i=0;i<m;i++)
			c[i]=a[i];
		for(j=0;j<n;j++)
			c[i++]=b[j];
		System.out.println("Array after merging is: \n");
		for(j=0;j<l;j++)
			System.out.print(c[j]+"\t");
		for(pass=0;pass<l-1;pass++)
    		{
		        small=c[pass];
     		   	pos=pass;
        		for(i=pass+1;i<l;i++)
            			if (c[i]<small)
            			{
                			small=c[i];
                			pos=i;
            			}
        		c[pos]=c[pass];
        		c[pass]=small;
    		}
		System.out.println("\nArray after sorting is: ");
		for(j=0;j<l;j++)
			System.out.print(c[j]+"\t");
	}
}