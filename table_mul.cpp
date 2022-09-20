//Print a Multiplication table of user given input number

#include<iostream>
using namespace std;

int main()
{
    int i,table=1,n;
    cout<<"Enter any positive number :: ";
    cin>>n;
    
    cout<<"\nMultiplication Table of given number ["<<n<<"]";
    
    for (i=1; i<=10;i++)
    {
     table=n*i;
     cout<<"\t"<<n<<"x"<<i<<"="<<table<<"\n";
    }
    return 0;
}
