#include<iostream>
using namespace std;
int main(){
    int i = 2;
    int n;
    cin>>n;
    int sum = 0;
    while(i<=n){
       sum = sum + i;
       i = i + 2 ; 
    }
    cout<<"The sum is "<<sum<<endl;
}