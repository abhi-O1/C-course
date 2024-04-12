#include<stdio.h>

// int sum(int x , int y){

//     return x+y ;
// }

// int main(){

//     int a ;
//     int b ;
//     printf("Enter the value of first no\n");
//     scanf("%d\n",&a);
//     printf("Enter the value of second no\n");
//     scanf("%d\n",&b);
//     int s = sum(a , b);
//     printf("%d",s);/


void table(int n){
    
    for(int i = 1 ; i<=10 ; i++ ){
         printf("%d",i*n);
      }
     
}

int main(){
    int n;
    printf("Enter the value : \n");
    scanf("%d",&n);
    table(n);
}

    
  
