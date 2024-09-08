#include<stdio.h>

int main(){
    int marks[10];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("the value of arrays are %d\n",marks[i]);
    }
    
    return 0;
}
