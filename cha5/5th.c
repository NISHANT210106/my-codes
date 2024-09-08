#include<stdio.h>

float F(float);
float F(float x){
    int f=x*9.8;
    return f;
}

int main(){
    float m;
    printf(" Enter mass :-");
    scanf("%f",&m);
    printf("Force(F) = %f\n",F(m));
    return 0;
}