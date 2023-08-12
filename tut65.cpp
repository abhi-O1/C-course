#include<iostream>
using namespace std ;

 bool iseven(int a){
    //for odd
    if(a&1){
    return 0;
    }
    //for even
    return 1;
 }
 
  int main(){
   
   int num ;
   cin >> num ;
   
  if(iseven(num)){
    cout<<"The number is even "<<num;
  }
  else{
    cout<<"The number is odd "<<num ;
  }
}