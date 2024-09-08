#include<stdio.h>

int main(){
    int b,sum;
    b=1;
    sum=0;
    do
    {
        sum += b;
        b++;

    } while (b<=10);
    
    printf("%d",sum);
    
    return 0;
}