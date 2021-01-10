class complex
{
  int r,im;
  void getdata(int real, int imag)
  {
    r=real;
    im=imag;
  }
  void add(int a, complex b)
  {
    r=a+b.r;
    im=b.im;
  }
  void add(complex a, complex b)
  {
    r=a.r+b.r;
    im=a.im+b.im;
  }
  void display()
  {
    System.out.println(r+"+i("+im+")");
  }
}
