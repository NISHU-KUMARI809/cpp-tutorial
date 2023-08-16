#include<iostream>
using namespace std;
int main()
{
	int n,rev=0,arr[n];
	cout<<"Enter the value of n:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int j=n-1;j>=0;j--)
	{
		cout<<arr[j]<<" ";
	}
	return 0;
}

