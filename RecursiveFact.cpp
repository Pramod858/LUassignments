#include<iostream>
using namespace std;

int fact(int a)
{
    if (a==1)
    {
        return(1);
    }
    else
    {
        return(a*fact(a-1));
    }
}

int main()
{
    int a,ans;
    cout<<"Enter a positive integer = ";
    cin>>a;
    ans = fact(a);
    cout<<"\nYour factorial output is = "<<ans;
}

