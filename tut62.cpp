#include<iostream>
using namespace std ;
int main(){
    int A ;
    cout<< "The value of A is "<<endl;
    cin>>A ;
    int B ;
    cout<< "The value of B is "<<endl;
    cin>>B;
    char oper;
    cout<< "Enter the operation : " " ";
    cin>>oper;
    switch(oper){
        case '+' : cout<< A+B <<endl;
        break;
        case '-' : cout<< (A-B) <<endl;
        break;
        case '*' : cout<< (A*B) <<endl;
        break;
        case '/' : cout<< (A/B) <<endl;
        break;
        case '%' : cout<< (A%B) <<endl;
        break;
    }
}