#include<iostream>
using namespace std ;

int setbits(int a , int b){
    int ans1 = 0;
    int ans2 = 0; 
    while (a!=0){
       if(a&1){
       ans1++;
       }
      a = a>>1;
      }
    while (b!=0){ 
       if(b&1){
       ans2++;
       } 
      b = b>>1;
    }
     return ans1 + ans2;
}


int main(){
    int a , b ;
    cin>>a >> b;
    cout<<"Total number of setbits are "<<setbits(a,b) ;
}