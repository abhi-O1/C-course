#include<iostream>
using namespace std ;
int main(){
    int i = 1;
    int n;
    cin>>n;  
    while(i<=n){
        int space = n - i;
        while(space){
            cout<< " " ;
          space = space - 1;
        }
         int num = i ;
          while( num ){
            cout<< i ;
            num = num - 1 ;
        }
        cout<<endl;
        i = i + 1;
    }
} 