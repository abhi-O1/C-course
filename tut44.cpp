#include<iostream>
using namespace std ;
int main(){
    int i = 1;
    int n;
    cin>>n;  
    while(i<=n){
       int j = 1;
       int space = i - 1;
       while(space){
       cout<< " " ;
       space = space - 1 ;
    }
       int star = n - i + 1;
       while (star){
       cout<< "*" ;
       star = star - 1 ; 
       }
        cout << endl ;
        i = i + 1;
    }
}