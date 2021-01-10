class result
{
  int mrks[][]=new int[3][3];
  int total[]=new int [3];
  int roll[]=new int[3];
  void getdata(int rollno[],int marks[][])
  {
    int i,j;
    for(i=0;i<3;i++)
      roll[i]=rollno[i];
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    mrks[i][j]=marks[i][j];
  }
  void total()
  {
    int sum=0,i,j;
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
        sum=sum+mrks[i][j];
       total[i]=sum;
	}
  }
  void subject()
  {
    int high,i,j,pos;
    for(i=0;i<3;i++)
    {
	pos=0;
      high=mrks[0][i];
      for (j=0;j<3;j++)
      {
        if(mrks[j][i]>high)
        {
          high=mrks[j][i];
          pos=j;
        }
      }
      System.out.println("Highest marks in Sub "+i+"= "+high+"\tRollno = "+roll[pos]);
    }
  }
  void topmarks()
  {
    int row[]=new int[3];
    int i,j,top,pos;
    for(i=0;i<3;i++)
    {
      row[i]=0;
      for(j=0;j<3;j++)
        row[i]+=mrks[i][j];
    }
    top=row[0];
    pos=0;
    for(i=1;i<3;i++)
    {
      if(top<row[i]){
      top=row[i];
      pos=i;}
    }
    System.out.println("Student with roll number "+roll[pos]+" obtained the highest total marks and total = "+row[pos]);
  }
}
