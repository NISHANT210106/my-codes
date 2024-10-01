#include<stdio.h>

int main(){
    int num,sum=0;
    scanf("%d",&num);
    for (int i = 0; i <= num; i++)
    {
        sum=sum+i;
    }
    printf("the sum of number until number %d is %d",num,sum);
    
    return 0;
}