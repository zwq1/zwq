#include<iostream.h>
void main()
{
	int k;
	double a,b,r,pi;
	cin>>r>>k;
	pi=3.1415926;
	a=pi*2*r;
	b=pi*r*r;
	switch(k)
	{
	
	case 1:cout<<"面积="<<b<<endl;break;
	
	case 2:cout<<"周长="<<a<<endl;break;
	
	case 3:cout<<"面积="<<b<<endl<<"周长="<<a<<endl;
}
}