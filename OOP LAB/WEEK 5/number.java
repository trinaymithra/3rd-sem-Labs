class number
{
  double n;
  number()
  {
    n=0;
  }
  number(double num)
  {
    n=num;
  }
  boolean isZero()
  {
    if (n==0)
    return true;
    return false;
  }
  boolean isPositive()
  {
    if (n>0)
    return true;
    return false;
  }
  boolean isNegative()
  {
    if (n<0)
    return true;
    return false;
  }
  boolean isOdd()
  {
    if (n%2!=0)
    return true;
    return false;
  }
  boolean isEven()
  {
    if (n%2==0)
    return true;
    return false;
  }
  boolean isArmstrong()
  {
    int i=0;
    double a,b,arm=0;
    a=n;
	b=n;
	while(a>0)
	{
		a=(int)a/10;
		i++;
	}
	while(b>0)
	{
		arm=(int)arm+(int)(Math.pow(b%10,i));
		b=(int)b/10;
	}
	
    if(n==arm)
      return true;
    return false;
  }
}
