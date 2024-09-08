#include<stdio.h>
int temp(int);
int temp(int a){
    int c = (a*9/5)+32;
    return c;
}
int main(){
    int a;
    scanf("%d",&a);
    printf("the temp in farenheit is %d ",temp(a));
    return 0;
}
