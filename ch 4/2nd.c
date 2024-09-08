#include<stdio.h>

int main(){
    int a=0;
    do
    {
        printf("this is do while\n");
        a++;
        if (a==1)
        {
            break;
        }
        
    } while (a<1000);
    
    return 0;
}
