#include<stdio.h>
int avg(int,int,int);
int avg(int x, int y, int z){
    int a=(x+y+z)/3;
    return a;
}
int main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    printf("avg of given num is %d ",avg(a,b,c));
    return 0;
}
