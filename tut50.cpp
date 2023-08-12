#include<iostream>
using namespace std;
int main (){
int i = 1;
int n;
cin>>n;
int count = 1;
while(i<=n){
    int space = n - i ;
    while(space){
    cout<< " " ;
    space = space - 1 ; 
     }
     int num = i;
     int j = 1; 
     while(num){
        cout<< j ;
        num = num - 1 ;
        j = j + 1 ;
     }
     int otr_side = i - 1;
     int sum = i-1;
     while(otr_side){
        cout<< sum ;
        sum = sum - 1;
        otr_side = otr_side - 1 ;
     }
     cout<<endl;
     i = i + 1;
}
}
