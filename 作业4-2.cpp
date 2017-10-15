#include<iostream.h>
void main()
{
	int i,n;
	n=0;
	for(i=2000;i<=3000;i++)
	{	if(i%4==0&&i%100!=0||i%400==0)
	{cout<<i<<" ";n=n+1;
	    if(n%10==0)
			cout<<endl;

	}
	}
			cout<<endl<<n<<endl;
}