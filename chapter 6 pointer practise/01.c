#include<stdio.h>

int main(){
    int a;
    a= 1001;
    int* b = &a;
    printf("the value at pointer b is %d",*b);    
    return 0;
}
