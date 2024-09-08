#include<stdio.h>

int main(){
    int s[11];
    int n;
    scanf("%d",&n);
    for (int i = 0; i <= 10; i++)
    {
        s[i]= i*n;
        printf("%d\n",s[i]);
    }
    return 0;
}