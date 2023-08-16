#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"Enter the value of n:";
	cin>>n;
	for(i=n;i>=1;i--)
	{
		for(j=i;j>0;j--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
