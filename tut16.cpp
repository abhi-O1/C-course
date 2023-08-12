#include<iostream>
using namespace std ;
int main(){
    int n;
    int sum = 0;
    cout<<"the value of n is ";
    cin>>n;
    int i = 1001;
    while( i <=n )
    { sum = sum + i ;
     i = i + 1 ;
     }
     cout<<"Value of sum is "<<sum<<endl;
}