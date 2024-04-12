#include<stdio.h>
int main(){
    int a = 2;
    float b = 3.1;
    char c = 'c';
    double d = 3.12;
    long double e = 3.1234;
   printf("The size of int is %i \n", sizeof(int));
   printf("The size of  double is %d \n", sizeof(double));
   printf("The size of float is %f \n", sizeof(float));
   printf("The size of char is %c \n", sizeof(char));
   printf("The size of long double is %ld \n", sizeof(long double));

}