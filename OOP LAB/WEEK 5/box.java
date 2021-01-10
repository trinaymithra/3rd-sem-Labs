import java.util.*;
class box
{
	double l,w,d,v;
	void getdata(double len, double wid, double dep)
	{
		l=len; w=wid; d=dep;
	}
	double vol()
	{
		v=l*w*d;
		return v;
	}
}
