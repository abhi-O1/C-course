#include<iostream>
using namespace std ;
int main(){
    int i = 1 ;
    int n;
    cin >> n ;
    char ch = 'A' ;
    while ( i <= n ){
        int j = 1;
        while ( j <= i ){
        cout<< ch ;
        j = j +1;
    } 
     cout<< endl;
     i = i + 1;
     ch = ch + 1;
}
}