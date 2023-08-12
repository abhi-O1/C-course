#include<iostream>
using namespace std;
int main(){
    int i = 1 ;
    int count = 1;
    int n ;
    cin>>n ;
    while(i<=n)
    {
     int j = 1;
    while(j<=n){
        cout<< count<<" ";
        count = count + 1 ; 
        j = j + 1 ; 
    }
     cout<<endl; 
     i = i + 1;

    }
}