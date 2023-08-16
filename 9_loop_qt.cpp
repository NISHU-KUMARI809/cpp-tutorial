//write a cpp program to find sum of even and product of odd digits of a given number
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n,sum=0,pro=1,digit;
//	cout<<"Enter the value of n:";
//	cin>>n;
//	while(n>0)
//	{
//		digit=n%10;
//		if(digit%2==0)
//		{
//			sum=sum+digit;
//		}
//		else
//		{
//			pro=pro*digit;
//		}
//		n=n/10;
//	}
//	cout<<"Sum of even is:"<<sum<<endl;
//	cout<<"Product of odd is:"<<pro<<endl;
//	return 0;
//	
//}
#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,pro=1,digit;
	cout<<"Enter the value of n:";
	cin>>n;
	for( ;n>0;n=n/10)
	{
		digit=n%10;
		if(digit%2==0)
		{
			sum=sum+digit;
		}
		else
		{
			pro=pro*digit;
		}
	}
	cout<<"Sum is:"<<sum<<endl;
	cout<<"Product is:"<<pro<<endl;
	return 0;
}
