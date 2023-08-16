// write a program to find factorial of a given number
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n,fac;
//	cout<<"Enter the value of n:";
//	cin>>n;
//	fac=1;
//	while(n>0)
//	{
//		fac=fac*n;
//		n=n-1;
//	}
//	cout<<"\nFactorial ="<<fac;
//	return 0;
//}
#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter the value of n:";
	int n,fac=1;
	cin>>n;
	for(;n>0;n=n-1)
	{
		fac=fac*n;
	}
	cout<<"Factorial is:"<<fac;
	return 0;
}

