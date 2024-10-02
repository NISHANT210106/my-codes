#include<stdio.h>

int main(){
    static int j,num=1;
    for (int i = 0; i < 10; i++)
    {
        for (j = 1; j < i; j++)
        {
            printf("%d",num);
            num++;
        }
        printf("\n");
    }
    
    return 0;
}