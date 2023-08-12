#include<iostream>
using namespace std;
int main(){
    int row = 1;
    int input;
    cin>>input;
    while(row<=input){
        char nigga = 'A' ;
        int column = 1 ;
      while(column<=input){
        char ch = nigga + column - 1;
      cout<< ch ;
      column = column + 1;
      }
    cout<<endl;
    row = row + 1;
}
}