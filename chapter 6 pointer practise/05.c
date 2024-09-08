#include<stdio.h>
int maths(int*,int*,int*,float*);
int maths(int* x, int* y,int* sum,float* avg){
    *sum = *x+*y;
    *avg = (*x+*y)/2;


}
int main(){
    int a,b,sum;
    float avg;
    printf("enter your first number :- ");
    scanf("%d",&a);
    printf("enter your second number :- ");
    scanf("%d",&b);
    maths(&a,&b,&sum,&avg);
    printf("sum is %d\n",sum);
    printf("avg is %f\n",avg);

    return 0;
}
