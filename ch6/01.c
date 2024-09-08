#include<stdio.h>

int main(){
    int n= 69;
    int* s =&n;    
    printf("%p\n",s);
    printf("%d\n",*s);

    return 0;
}