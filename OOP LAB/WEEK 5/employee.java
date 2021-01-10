class employee
{
  String name, city;
  double sal, da, hra,total;
  void getdata(String empname, String place, double salary, double allowance, double rent)
  {
    name=empname;
    city=place;
    sal=salary;
    da=allowance;
    hra=rent;
  }
  void calculate()
  {
    total=sal+(sal*da/100)+(sal*hra/100);
  }
  void display()
  {
    System.out.println("Total salary = "+total);
  }
}
