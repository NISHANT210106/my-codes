#include<stdio.h>

int main(){
    int a,multi=1;
    scanf("%d",&a);
    for (;a>=1;a--)
    {
        multi *=a;
    }
    
    printf("%d\n",multi);
    return 0;
}
                                                                                        