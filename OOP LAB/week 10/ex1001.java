import java.io.*;
import java.util.*;
public class ex1001 
{
    public static void main(String[] args) throws IOException
    {
        int ch,i=0;
        String wr="";
        System.out.println("Enter 1.Write to file, 2.Read from file, 3. Copy to another file, 4.Exit");
        Scanner sc=new Scanner(System.in);
		File f=new File("D:/180953116/OOP LAB/week 10/q1.txt");
		FileInputStream f1 = new FileInputStream(f);
        FileOutputStream f2 = new FileOutputStream(f);
        do
        {
            ch=sc.nextInt();
            switch(ch)
            {
                case 1:
                    System.out.println("Enter text to be written in the file: ");
                    wr=sc.next();
					byte b[]=wr.getBytes();
					f2.write(b);
                    f2.close();
                    break;
				case 2:
					try
					{
                    	while((i = f1.read()) != -1)
                        System.out.print((char)i);
                	}
                	catch(Exception e)
                	{
                    	System.out.println("Exception: "+e);
                	}
					break;
				case 3:
					FileInputStream f3=new FileInputStream("D:/180953116/OOP LAB/week 10/q2.txt");
					FileOutputStream f4=new FileOutputStream("D:/180953116/OOP LAB/week 10/q2.txt");
					String s="";
					try
					{
                    	while((i = f1.read()) != -1)
                        	s+=(char)i;
						byte c[]=s.getBytes();
						f4.write(c);
						System.out.println("File 2 now contains: ");
						while((i = f3.read()) != -1)
                        	System.out.print((char)i);
					}
					catch(Exception e)
                	{
                    	System.out.println("Exception: "+e);
                	}
					f3.close();
					f4.close();
					break;
				case 4: break;
				default: System.out.println("Invalid choice");
            }
        }while(ch!=4);
    }          
}