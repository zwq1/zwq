#include<iostream.h>
void main()
{
	int n,sum,i;
	float S,b;
	S=0;
	cout<<"������һ������n:";
	cin>>n;
	sum=0;
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
		b=1.0/sum;
		S=S+b;
	}
	cout<<"S="<<S<<endl;
}