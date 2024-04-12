#include<iostream>
using namespace std ;
// int main(){

void printarray(int arr[] , int size) {

   cout<< " Printing arrays " <<endl;

   for(int i = 0 ; i < size ; i++){
     
     cout<< arr[i] <<endl;

   }
   
   cout<< " Printing ended "<<endl ;

}

int main(){
   
   int first[10] = { 2, 3, 4 ,6};
   printarray(first , 10);

   int second[15] = {1 , 2, 3 };
   printarray(second , 15);

   int third[5] = { 4, 5, 6, 7} ;
   printarray(third , 5);

   int fourth[4] = {2,3,5,3};
   printarray(fourth , 6);

// int arr[3] = {2,3,4};
// cout<<"value at second is"<<arr[1];
// }