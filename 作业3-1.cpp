#include <iostream.h>
void main()
{
int x;
cout<<"Please input x:"<<endl;
cin>>x;
if(x<10)
     cout<<"x<10"<<x<<endl;
  else
  {
  if(x<=99)
		 cout<<"10<=x<=99"<<x<<endl;
	  else
	  {
	    if(x<=999)
			 cout<<"100<=x<=999"<<x<<endl;
		  else
		  {
		    if(x>=1000)
			 cout<<"x>=1000"<<x<<endl;
		 
		  }
      }
  }
}