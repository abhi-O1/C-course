#include<iostream>
using namespace std ;
int main(){
    int n ;
    cin>>n;
    int r = 1;
    int c = 1;
    while(r<=n){
       
        while( c <= n )
        { cout<< "*" ;
        c = c + 1 ; }
        cout<<endl;

        c = 1;
        r = r + 1 ;
    }
}