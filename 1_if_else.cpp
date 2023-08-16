//#include<iostream>
//using namespace std;
//int main()
//{
//	int a;
//	cout<<"Enter the number:";
//	cin>>a;
//	if(a%2==0)
//	{
//		cout<<a<<endl<<"Even number";
//	}
//	else
//	{
//		cout<<a<<endl<<"odd number";
//	}
//	return 0;
//}
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"\nEnter two numbers:";
	cin>>a>>b;
	if(a>b)
	{
		cout<<"Max Number:"<<a<<endl;
	}
	else
	{
		cout<<"Max number :"<<b<<endl;
	}
	if(a<b)
	{
		cout<<"Min Number:"<<a<<endl;
	}
	else
	{
		cout<<"Min Number:"<<b<<endl;
	}
	return 0;
	
}
