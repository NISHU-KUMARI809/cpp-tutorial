#include<iostream>
using namespace std;
int main()
{
	int n,rev=0,original;
	cout<<"Enter the value of n:";
	cin>>n;
	original=n;
	for(;n>0;n=n/10)
	{
		rev=(rev*10)+n%10;	
	}
	if(rev==original)
	{
		cout<<"palindrom"<<endl;
	}
	else
	{
		cout<<"not palindrom"<<endl;
	}
	cout<<"Reverse is:"<<rev;
	return 0;
}
