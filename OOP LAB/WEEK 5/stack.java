import java.util.*;
class stack
{
    int top,a,high=10;
	int s[]=new int[100];
    stack()
    {
        top=-1;
    }
    void push(int n)
	{
    if (top==high-1)
        System.out.println("Stack is full");
    else
     {
        top=top+1;
        s[top]=n;
     }

    }
    int pop()
	{
    int ele;
    if(top==-1)
     {
        System.out.println("Stack is empty");
        return (-999);
     }
    else
     {
        ele=s[top];
        top--;
        return(ele);
     }
    }
    void display()
	{
    int i;
    if (top==-1)
        System.out.println("Stack is empty");
    else
        for(i=top;i>=0;i--)
            System.out.print(s[i]+"\t");
    }
	public static void main(String args[])
	{
		int ch;
		stack s=new stack();
		Scanner sc=new Scanner(System.in);
		System.out.println("1. insert \t 2. delete \t 3.display stack \t");
		ch=sc.nextInt();
		do
		{
			switch(ch)
			{
				case 1:
				{
					System.out.println("Enter the element: ");
					int n;
					n=sc.nextInt();
					s.push(n);
					break;
				}
				case 2:
				{
					int ele;
					ele=s.pop();
					System.out.println(ele);
					break;
				}
				case 3:
				{
					s.display();
					break;
				}
				case 4:
				break;
			}
			System.out.println("1. insert \t 2. delete \t 3.display stack \t4.exit");
		ch=sc.nextInt();
		}while(ch<4);
	}
}