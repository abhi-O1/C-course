#include<iostream>
using namespace std ;
int main(){
    int i = 1;
    int n;
    cin>>n;
    while(i<=n){
        int star = i ;
        while(star ){
            cout << "*" ;
            star = star - 1 ;
        } 
    cout<<endl;
    i  = i + 1;
    }
}