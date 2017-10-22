#include<iostream.h>
#include<math.h>
void main()
{
	int k;
	float r,l,S;
	cout<<"please input r,k"<<endl;
	cin>>r>>k;
	S=3.14*r*r;
	l=3.14*2*r;
	switch(k)
	{
	case 1:cout<<"S="<<S<<endl;break;
	case 2:cout<<"l="<<l<<endl;break;
	case 3:cout<<"S="<<S<<","<<"l="<<l<<endl;break;
	default:cout<<endl;
	}
}