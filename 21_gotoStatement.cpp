//goto statement is a jump control statement which is used to transfer the flow of program
#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter the value of a:";
	cin>>a;
	if(a%2==0)
	  goto even;
	else
	   goto odd;
	even:
	 cout<<"The number is even"<<endl;
	 return 0;
	odd:
	 cout<<"The number is odd"<<endl;
	 return 0;   
}
