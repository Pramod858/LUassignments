/* If statement */

#include<iostream>
using namespace std;

int main()
{
	if(7>4)
	{
		cout<<"Yes";
	}
	return 0;
}



/* Else statement */

#include<iostream>
using namespace std;

int main()
{
	if(7>4)
	{
		cout<<"Yes";
	}
	else 
	{
		cout<<"No";
	}
	return 0;
}


/* Nested if statement */

#include<iostream>
using namespace std;

int main(){
	int mark=100;
	if (mark>=50)
	{
		cout<<"You Passed"<<endl;
		if (mark==100){
			cout<<"Perfectly"<<endl;
		}
		else
		{
			cout<<"You Failed"<<endl;
		}
	}
	return 0;
}
