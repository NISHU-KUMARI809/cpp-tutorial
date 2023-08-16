//write a cpp program to find sum of digits of a given numbers
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n,sum=0;
//	cout<<"Enter the value:";
//	cin>>n;
//	while(n>0)
//	{
//		sum=sum+n%10;
//		n=n/10;
//	}
//	cout<<"Sum is:"<<sum;
//	return 0;
//	
//}
#include<iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cout<<"Enter the value of n:";
	cin>>n;
	for( ;n>0;n=n/10)
	{
		sum=sum+n%10;
	}
	cout<<"Sum is:"<<sum;
	return 0;
}
