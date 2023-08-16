//write a program to calculate x^y(x to the power y)
#include<iostream>
using namespace std;
int main()
{
	int x, y,i=1,pro=1;
	cout<<"Enter the value of x:";
	cin>>x;
	cout<<"Enter the value of y:";
	cin>>y;
	for(;i<=y;i=i+1)
	{
		pro=pro*x;
	}
	cout<<"The product is:"<<pro<<endl;
}
