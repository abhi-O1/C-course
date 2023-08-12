#include<iostream>
using namespace std ;
int main(){
    int amount ;
    cout<<"The value of amount is ";
    cin>>amount;
    int $100 , $50 , $20 , $1;
    switch(1){
        case 1 : $100 = amount/100 ;
        amount  = amount%100 ;
        cout<<"Total $100 notes required are "<< $100 <<endl;

        case 2 : $50 = amount/50 ;
        amount = amount%50 ; 
        cout<< " Total $50 notes required are "<< $50 <<endl;

        case 3 : $20 = amount/20 ;
        amount = amount%20 ;
        cout<< " Total $20 notes required are "<< $20 <<endl;

        case 4 : $1 = amount/1 ;
        cout<< " Total $1 notes required are "<< $1 <<endl;
   }
   }
