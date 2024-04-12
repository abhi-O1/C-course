#include<stdio.h>
#include<conio.h>
int main(){
    int arr1[5] , arr2[5];
    int arr3[10];
    int a,b,c,d;
   printf("Enter the number of elements");
   scanf("%d",&a);
    printf("enter the elemets of 1st array");
    for(int i = 0 ; i<a ; i++){
        scanf("%d",&arr1[i]);
    }
     printf("Enter the number of elements in 2nd array");
    scanf("%d",&b);
    printf("enter the elemets of 2nd array");
    for(int i = 0 ; i<b ; i++){
        scanf("%d",&arr2[i]);
    }   
      c = a + b ;
        for(int i=0; i<a; i++){
        arr3[i] = arr1[i];
   }
    for(int i=0; i<a+b; i++){
        arr3[i] = arr2[i];
         printf("%d", arr3[i]);
        }
}
