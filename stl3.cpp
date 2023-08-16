#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>vec;
	vec.push_back(4);
	vec.push_back(5);
	vec.push_back(9);
	vec.erase(vec.begin()+1); // delete or erse the xnumber
	for(int i=0;i<vec.size();i++)
	{
		cout<<vec[i]<<" ";
	}
	cout<<endl;
	vec.insert(vec.begin()+1,8); // insert the number on required position
	for(int i=0;i<vec.size();i++)
	{
		cout<<vec[i]<<" ";
	}
	cout<<endl;
	reverse(vec.begin(),vec.end());
	for(int i=0;i<vec.size();i++)
	{
		cout<<vec[i]<<" ";
	}
	cout<<endl;
	sort(vec.begin(),vec.end());
	for(int i=0;i<vec.size();i++)
	{
		cout<<vec[i]<<" ";
	}
	cout<<endl;
	return 0;
}
