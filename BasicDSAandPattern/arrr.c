#include<stdio.h>



int main(){
    int a=6;
    int *b=&a;
    // printf("%d  ",*b);
    *b=*b+4;
    printf("%d",a);
}