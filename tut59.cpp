#include<iostream>
using namespace std ;
int main(){
    char ch = 'A' ;
    int num = 1 ; 
    switch(ch){
      case 1 : cout<< "This is a num " ;
      break; 

      case 'A' : switch(num){
       case 1 : cout<< "The value is 2 " ;
      break;
      }
      break ;
      
      default : cout<< " The value is default " ;

    }
    cout<<endl;
}