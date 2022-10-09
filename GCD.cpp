//HCF/GCD of two numbers
// a = 12   and    b = 18
// 2,3,6

#include<iostream>
using namespace std;

void hcf(int a, int b) //--> (a=12,b=30)
{
    int m,n; //local variable
    m=a; //m=a=12
    n=b; //n=b=30
    
    while(m!=n)// | (12!=30)    | (12!=18)  | (12!=6)   | (6!=6)
    {
        if(m>n) // | (12>30)    | (12>18)   | (12>6)    |
            m=m-n; // ----------------------> m=12-6=6  |
        else 
            n=n-m;// n=30-12=18 | n=18-12=6 |           |
    }
    cout<<"\n H.C.F of ["<<a<<"] and ["<<b<<"] is = "<<m<<"\n";
}

int main()
{
    int a,b;
    cout<<"Enter 1st number = ";
    cin>>a; //--->12
    cout<<"Enter 2nd number = ";
    cin>>b; //---> 30
    
    hcf(a,b); //-->(12,30)
    
    return 0;
}
