#include<stdio.h>

int main(){
    float a,b,c;
    printf("enter principal amount:- ");
    scanf("%f",&a);
    printf("enter intrest rate:- ");
    scanf("%f",&b);
    printf("enter time:- ");
    scanf("%f",&c);
    float intrest = a*(b/100)*c;
    printf("your intrest is %f",intrest);
    return 0;
}
