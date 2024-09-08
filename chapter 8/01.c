#include<stdio.h>

int main(){
    int s[11];
    for (int i = 0; i <= 10; i++)
    {
        s[i]= i*5;
        printf("%d\n",s[i]);
    }
    return 0;
}