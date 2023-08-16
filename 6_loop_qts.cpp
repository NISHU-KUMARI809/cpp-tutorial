//#include<iostream>
//using namespace std;
//int main()
//{
//	int n,sum=0;
//	cout<<"Enter the number:";
//	cin>>n;
//	for(int i=0;i<=n;i++)
//	{
//		sum=sum+i;
//	}
//	cout<<"Sum is:"<<sum;
//	return 0;
//
//}
#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,i=1;
	cout<<"Enter the value of n:";
	cin>>n;
	while(i<=n)
	{
		sum=sum+i;
		i=i+1;	
	}
	cout<<"Sum is:"<<sum;
	return 0;
}

