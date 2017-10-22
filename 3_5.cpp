#include<iostream.h>
#include<math.h>
void main()
{
	float a,b,c,s,l;
	cin>>a>>b>>c;
	l=(a+b+c)/2;
	s=sqrt(l*(l-a)*(l-b)*(l-c));
	cout<<"s="<<s<<endl;
}