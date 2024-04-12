#include<stdio.h>
int main(){
    int i ;
    int *ptr = (int*)malloc(2*sizeof(int));
    if(ptr==NULL){
   printf("Memory is not available");
     return 1;
    }
    for( i = 0 ; i<2 ; i++){
        scanf("%d", ptr+i);
    }
    ptr = (int*)realloc(ptr, 4*sizeof(int));
    if (ptr==NULL){
    printf("Memory is not available");
    return 1;
   }
   for( i = 2 ; i<4 ; i++){
    scanf("%d", ptr+i);
   }
   for( i = 0 ; i<4 ; i++){
   printf("Enter the value %d", *(ptr+i));
   }
   return 0;

}