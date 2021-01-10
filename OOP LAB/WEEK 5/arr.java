import java.util.*;
class arr
{
	int a[]=new int[10];
	Scanner sc=new Scanner(System.in);
	void input()
	{
	int i;
		System.out.println("Enter 10 elements of the array: ");
		for(i=0;i<10;i++)
			a[i]=sc.nextInt();
	}
	void disp()
	{
	int i;
		for(i=0;i<10;i++)
			System.out.print(a[i]+"\t");
	}
	void large()
	{
		int i,large=a[0];
		for(i=1;i<10;i++)
			if(large<a[i])
				large=a[i];
		System.out.println("\nLargest element = "+large);
	}
	void average()
	{
	int i;
		float avg=0;
		for(i=0;i<10;i++)
			avg=avg+a[i];
		avg=avg/10;
		System.out.println("\nAverage = "+avg);
	}
	void sort()
	{
	int i;
		int pass,pos,small;
		for(pass=0;pass<9;pass++)
    	{
        	small=a[pass];
        	pos=pass;
        	for(i=pass+1;i<10;i++)
            if (small>a[i])
            {
                small=a[i];
                pos=i;
            }
        a[pos]=a[pass];
        a[pass]=small;
    	}
		for(i=0;i<10;i++)
			System.out.println(a[i]+"\t");
	}
	public static void main(String args[])
	{
		arr b=new arr();
		b.input();
		b.disp();
		b.large();
		b.average();
		b.sort();
	}
}