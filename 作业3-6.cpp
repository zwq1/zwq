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
	
	case 1:cout<<"���="<<b<<endl;break;
	
	case 2:cout<<"�ܳ�="<<a<<endl;break;
	
	case 3:cout<<"���="<<b<<endl<<"�ܳ�="<<a<<endl;
}
}