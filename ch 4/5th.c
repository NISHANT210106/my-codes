#include<stdio.h>

int main(){
    int b,sum;
    sum=0;
    for (b=1;b<=10;b++)
    {
        sum += b;
    }
    printf("the sum of first ten natural numbr is %d\n",sum);
    
    return 0;
}