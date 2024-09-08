#include<stdio.h>
void add(int *x){
    printf("the address of i is %p",x);
}
int main(){
    int i =121;
    printf("%p",&i);
    add(&i);
    return 0;
}
