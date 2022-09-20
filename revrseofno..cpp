#include<iostream>
using namespace std;

int main()
{
    int no,rev=0,r,n;
    cout<<"Enter any positive number = ";
    cin>>n;
    no=n;
    
    while(no>0)
    {
        r=no%10;
        cout<<"r=no%10 == "<<no<<"  "<<r<<'\n';
        rev=rev*10+r;
        cout<<"rev=rev*10+r == "<< rev<<'\n';
        no=no/10;
        cout<<"no=no/10 == "<<no<<'\n';
    }
    cout<<"\nReverse of the number"<<n<<"is ="<<rev<<"\n";
    return 0;
}

