#include<iostream.h>
#include<math.h>
void main()
{
	float a,b,c,s,S;
	cout<<"输入三角形三边长：";
	cin>>a>>b>>c;
	s=(a+b+c)/2;
	S=sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<"三角形面积为："<<S<<endl;
}