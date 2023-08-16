// prime number
#include<iostream>
using namespace std;
int main()
{
	int n,count=0,j=1;
	cout<<"Enter Numbers:";
	cin>>n;
	for(;j<=n;j++)
	{
		if(n%j==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		cout<<"Prime number";
	}
	else
	{
		cout<<"Not prime";
	}
	return 0;	
}
