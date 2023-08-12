#include<iostream>
using namespace std ;
int main (){
    int i  =  1 ;
    int n ;
    cin >> n ;
    while(i<=n){
    int first = n - i + 1;
    int j = 1;
    while(first)
    {
        cout<< j ;
        j = j + 1;
        first = first - 1;
    }
    int star = i - 1;
   while(star){
    cout<< "*" ;
    star = star - 1 ;
    }
    int star2 = i - 1 ;
    while(star2){
        cout<< "*" ;
        star2 = star2 - 1;
    }
     int count = n - i + 1 ;
     while(count){
        cout<< count ;
        count = count - 1 ;
     }
     cout<<endl;
     i = i + 1;
    }
}