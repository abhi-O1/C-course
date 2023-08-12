#include<iostream>
using namespace std ;

int fibonacci(int n){
     int a = 0;
     int b = 1 ;
     cout<< a << " "<< b ;
    for(int i = 1 ; i<= n ; i++){
       int new_no = a + b ;  
       cout<<  new_no  <<" " ;
       a = b;
       b = new_no;

    }
    }



int main(){
    int n ;
    cin>>n;
    cout<<" the nth term is "<<fibonacci(n);
}
