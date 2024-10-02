#include<stdio.h>

int main(){
    int a=3,b=4,c=17;
    if (a>b && a>c)
    {
        printf("the greatest number is %d",a);
    }
    else if (b>a && b>c)
    {
        printf("the greatest number is %d",b);
    }
    else
    {
        printf("the greatest number is %d",c);
    }

    return 0;
}