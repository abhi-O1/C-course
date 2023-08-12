#include<iostream>
using namespace std ;

//for prime = 1 
//for not prime = 0 

bool isprime(int n){
    for(int i = 2; i<n ; i++){
        if(n%i == 0){
        return 0;
        }
    }
    return 1;
}

int main(){
    int a ;
    cin>> a ;
    if(isprime(a)){
        cout<<"The number is prime " ;
    }
   else{cout<<"Not a prime number" ;
   }
}