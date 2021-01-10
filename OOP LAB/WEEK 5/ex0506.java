import java.util.*;
class ex0506
{
  public static void main(String args[])
  {
  String name,writer;
  int i,year;
  book a[]=new book[6];
  Scanner sc=new Scanner(System.in);
  for(i=0;i<6;i++)
  {
    System.out.println("Enter book name, author and edition year");
    name=sc.nextLine();
    writer=sc.nextLine();
    year=sc.nextInt();
    a[i].data(name, writer, year);
  }
  for(i=0;i<6;i++)
      a[i].display();
  }
}
