#include<stdio.h>

int main(){
    int b,sum;
    b=1;
    sum=0;
    while (b<=10)
    {
        sum += b;
        b++;

    }
    printf("%d",sum);
    
    return 0;
}