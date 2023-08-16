#include<iostream>
using namespace std;
int main()
{
	int n,fac=1;
	cout<<"Enter the value of n:";
	cin>>n;
	if(n==0)
	{
		cout<<"factorial is:1";
	}
	else if(n<0)
	{
		cout<<"Factorial of negative number is not possible";
	}
	else
	{
		for(;n>0;n=n-1)
		{
			fac=fac*n;
		}
		cout<<"Factorial is:"<<fac;
	}
	return 0;
}
