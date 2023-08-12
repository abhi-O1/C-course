#include<iostream>
using namespace std ;
int main(){
    int i = 1;
    int n;
    cin>>n;  
    while(i<=n){
        int space = i - 1;
       while (space){
       cout<< " " ;
       space = space - 1;
       }
       int num = 4 - i + 1 ;
       while (num){
        cout<< i ;
        num = num - 1;
       }
       cout<<endl;
       i = i + 1;
    }
}