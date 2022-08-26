#include<iostream>
using namespace std;

int add(float sum,float a,float b)
{
	sum=(a+b);
	cout<<"addition of two number is="<<sum;
	return sum;
}

int main(){
	int a,b;
	cout<<"Enter a"<<a;
	cin>>a;
	cout<<"\nEnter b"<<b;
	cin>>b;
	
	
	int sum=add(sum,a,b);

	return 0;
}



//int add(int x,int y)
//
//{
//	return  x+y;
//}
//int sub
