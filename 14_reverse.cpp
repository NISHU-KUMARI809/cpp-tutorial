// write a program to find reverse of a given number
#include<iostream>
using namespace std;
int main()
{
	int i,rev=0;
	cout<<"Enter numbers:";
	cin>>i;
	for(;i>0;i=i/10)
	{
		rev=(rev*10)+i%10;
	}
	cout<<"\nReverse="<<rev;
	return 0;	
}
