#include<iostream>
using namespace std ;
int main(){
int n;
cout<< " Enter the value of n " ;
cin>>n;
bool isprime = 1;
for(int i = 2 ; i < n ; i++){
    if(n%i == 0){
       // cout<< " N is not prime number "<<endl ;
       isprime = 0;
        break;
    }    
}   
   if(isprime == 0){
    cout<< " N is not a prime number " ;
   }
   else{ cout<<" N is a prime number " ; }
}
