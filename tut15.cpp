#include<iostream>
using namespace std;
int main(){
 char ch ;
 cout<<"The value of ch is ";
 cin>>ch;
 if(ch>='A'&& ch<='Z'){
    cout<<"This is uppercase"<<endl;
    }
    else if(ch>='a' && ch<='z'){
        cout<<"This is lowercase"<<endl;
    }
    else if(ch>='0' && ch<='9'){
        cout<<"This is numeric"<<endl;
    }

 }
