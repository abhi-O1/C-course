#include<iostream>
using namespace std;
int main(){
    int i = 1;
    int n ;
    cin>>n;
        int space = i - 1 ;
        while(space){
            cout<<" " ;
            space = space - 1;
        }
        int num = n - i + 1;
        int print = i;
        while(num){
        cout<< print ;
         print = print + 1;
         num = num - 1 ;
          }
          cout<<endl;
          i = i + 1;
     }