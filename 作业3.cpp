#include<iostream.h>
void main()
{
	int i,x;
	cout<<"请输入i"<<endl;
	cin>>i;
    switch(i/100)
	{
	case 10:cout<<"1000以上";break;
	case 9:
	case 8:
	case 7:
	case 6:
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:cout<<"100-999";break;
    case 0:x=i/100;
		if(0.10>x>0.01)
			cout<<"10以下";
		else
			cout<<"10-99";break;
	
    }
}