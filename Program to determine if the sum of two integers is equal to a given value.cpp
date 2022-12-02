 // Program to determine if the sum of two integers is equal to a given value.
 #include<iostream>
 using namespace std;
 
 
 int main(){
     int a[10],size,i,j,n,sum;
     cout<<"Enter the size : ";
     cin>>size;
     for(i=0;i<size;i++){
         cin>>a[i];
     }
     cout<<"Enter the value x : ";
     cin>>n;
     for(i=0;i<size-1;i++){
         for(j=i+1;j<size;j++){
            sum=a[i]+a[j]; 
         if(sum==n){
             	cout <<"Pair with a given sum "<<n<<" is ("<<a[i]<<","<<a[j]<<") Valid pair exists"<<endl;
             	return 1;
			} 
			   	 
			}
         }
     cout<<"No valid pair exists for "<<n<<endl;
      
      
 }
