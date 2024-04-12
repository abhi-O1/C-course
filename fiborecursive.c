#include<stdio.h>

int fib(int n){
     if(n == 0){
         return 0;
    }
     if(n == 1){
         return 1;
    }
    int fiboNM1 = fib(n-1);
    int fiboNM2 = fib(n-2);
    int fiboN = fiboNM1 + fiboNM2;
     printf("Fibbonacci of %d is", fiboN);
   return fiboN;

}
int main (){
    int n ;
    printf("Enter the number");
    scanf("%d",&n);
    printf("%d",fib(n));
}