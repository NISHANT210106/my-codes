#include<stdio.h>//#include is a preproccser directive
#define pi 3.14;
#define square(x)(x*x);

int main(){
    int sqr= square(10);
    printf("%d",sqr);
    return 0;
}