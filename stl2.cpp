//vector is nothing but dynamic array having many fun like push_back(),pop_back(),size(),resize(),begin(),end(),clear(),empty(),erase(),insert(),reverse(),sort()
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>vec;
	vec.push_back(4);
	vec.push_back(5);
	vec.push_back(6);
	cout<<vec.size()<<endl;
	// printing vector
	for(int i=0;i<vec.size();i++)cout<<vec[i]<<" ";
	cout<<endl;
	vec.pop_back();
	for(int i=0; i<vec.size();i++)cout<<vec[i]<<" ";
	cout<<endl;
	vec.resize(8);
	for(int i=0;i<vec.size();i++)cout<<vec[i]<<" ";
	cout<<endl;
	cout<<*(vec.begin())<<endl;
	cout<<*(vec.end())<<endl;
	vec.clear();
	cout<<vec.size()<<endl;
	if(vec.empty())
	{
		cout<<"Empty"<<endl;
		
	}
	else cout<<"Not Empty";
	return 0;
	
}
