#include<stdio.h>
int nat(int);
int net(int n){
    if ( n == 0 )
    {
        return 0;
    }
    else
    {
        return n+ net(n-1);
    }
    
    
}
int main(){
    int a;
    scanf("%d",&a);
    int b=net(a);
    printf("sum of first n number is %d . ",b);
    return 0;
}
