#include<stdio.h>
void swap(int* x,int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y =temp;
}
int main(){
    int x =10;
    int y =20;
    printf("value before swap\n x = %d\n y = %d\n",x,y);
    swap(&x,&y);
    printf("value after swap\n x = %d\n y = %d",x,y);

    return 0;
}
