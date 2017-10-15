#include<iostream.h>
void main()
{
	int a,b,c,d;
	cin>>a>>b;
	c=a/b;
	d=a%b;
	if(a%b==0)
		cout<<"a/b="<<c<<endl;
	else
		cout<<"a/b="<<c<<"--"<<d<<endl;
}