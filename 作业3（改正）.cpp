#include<iostream.h>
void main()
{
	int n,m,k=0;
	cout<<"Enter an Integer: ";
	cin>>n;
	m = n;
	while(m>0)
	{
		k++;
		m = m/10;
	}
	switch(k)
	{
	case 0:
	case 1:
		cout<<n<<"��С��10����"<<endl;
		break;
	case 2:
		cout<<n<<"��10~99֮�����"<<endl;
		break;
	case 3:
		cout<<n<<"��100~999֮�����"<<endl;
		break;
	default:
		cout<<n<<"��1000���ϵ���"<<endl;
	}
}