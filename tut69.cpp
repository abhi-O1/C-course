#include<iostream>
using namespace std ;

int AP(int n){
    int ans = (3 * n + 7);
    return ans;
}

int main (){

    int n ;
    cout<<"The value of n is " ;
    cin>>n; 
     cout<< "The nth term is " <<AP(n) ; 

}