#include <stdio.h>
int main(){
    int a,multi=1;
    scanf("%d",&a);
    while (a>=1)
    {
        multi *= a;
        a--;
    }
    
    
    printf("%d\n",multi);
    return 0;
}
                                                                                        