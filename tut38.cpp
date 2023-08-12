#include<iostream>
using namespace std;                                
int main(){                                       
    int row = 1;                                   
    int input ;
    char ch = 'A' ;
    cin>>input ;
    while(row<=input)
    { int column = 1;
      char nigga = ch ;
      while(column<= input){
        cout<< nigga ;
        column = column + 1;
        nigga = nigga + 1;
      }
       cout<<endl;
       row = row + 1;
       ch = ch + 1;
    }

}