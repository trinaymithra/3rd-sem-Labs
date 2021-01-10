import java.util.*;
class adn0501
{
  public static void main(String args[])
  {
  int marks[][]=new int[3][3];
  int rollno[]=new int[3];
  int i,j;
  result r=new result();
  Scanner sc=new Scanner(System.in);
  System.out.println("Enter roll numbers of the students: \n");
  for(i=0;i<3;i++)
    rollno[i]=sc.nextInt();
  System.out.println("Enter the marks of students: ");
  for(i=0;i<3;i++)
    for(j=0;j<3;j++)
      marks[i][j]=sc.nextInt();
  r.getdata(rollno,marks);
  r.total();
  r.subject();
  r.topmarks();
  }
}
