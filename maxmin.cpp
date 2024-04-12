#include<iostream>
#include<limits.h>
using namespace std; 

 int getMax(int num[] , int size){
    int maxi = INT_MIN ;

    for(int i = 0 ; i<size ; i++){

        cin>>num[i];

        maxi = max(maxi , num[i]);


        /*if(num[i] > max){

        max = num[i] ;

        }*/
    }
       return maxi; 
  }
     

     int getMin(int num[] , int size){
    int mini = INT_MAX;

    for(int i = 0 ; i<size ; i++){

        cin>>num[i];

        mini = min(mini,num[i]);
    
    }
       return mini; 
  }

int main(){


    int arr[3] ;
    
    cout<<"Maximum value is "<<getMax(arr , 3 ) ;

    cout<<"Minimum value is "<<getMin(arr, 3 ) ;
}








