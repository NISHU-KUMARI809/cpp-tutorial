//write a program to generate fibonacci series upto a given number
//fibonaci series me 1st 2 term fix hote h 0,1 aur baaki ke pichle 2 term ke sum key equal hote h
// ex: 0, 1 ,1+1=2,1+2=3,2+3=5,3+5=8 and so on 
//0,1,1,2,3,5,8.............
#include<iostream>
using namespace std;
int main()
{
	int n,x,y,z;
	cout<<"Enter Max term:";
	cin>>n;
	x=0;
	y=1;
	z=0;
	for(;z<=n;z=x+y)
	{
		cout<<z<<endl;
		x=y;
		y=z;
	}
	return 0;	
}
