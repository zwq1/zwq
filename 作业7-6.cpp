#include<iostream.h>
#include<stdio.h>
#include<string.h>
void s(char *y,char *z,int n)
{
	char *p;
	char *q;
	int l;
	p=z;
	while(*p)
	{
		p++;
	}
	l=p-z;
	p=y;
	while(*p)
	{
		p++;
	}
	while(p>=y+n-1)
	{
		*(p+l)=*p;
		p--;
	}
	p++;
	q=z;
	while(*q)
	{
		*p=*q;
		p++;
		q++;
	}
}
void main()
{
	char a[100],b[100];
	int i,k;
	cout<<"������ԭ�ַ���:"<<endl;
	gets(a);
	cout<<"�������ַ���:"<<endl;
	gets(b);
	cout<<"����������λ��:"<<endl;
	cin>>i;
	s(a,b,i);
	cout<<"������ַ���:"<<endl;
	puts(a);
}
