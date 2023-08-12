#include<iostream>
using namespace std;                                
int main(){                                       
    int row = 1;                                   
    int input ;
    cin>>input ;
    char nigga = 'A' ;
    while(row<=input)
    { int column = 1;
      while(column<= row ){
        cout<< nigga ;
        column = column + 1 ;}
       
       cout<<endl;
       row = row + 1;
       nigga = nigga + 1;
    }

}