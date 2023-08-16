// you are given N integers sort the N integer and print the sorted order.
// store the N integer in a vector , vectors are sequence containers representing array that can change in size
#include<iostream>
#include<cstdio>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number:"<<endl;
	cin>>n;
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		int x;
		cout<<"Enter the required term:"<<endl;
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++) cout<<v[i]<<" ";
	
	return 0;
	
}
