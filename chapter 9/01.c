#include<stdio.h>
int main(){
    // a string ends with a \0 which mean it ends the string here
    char st[]={'n','i','s','h','a','n','t','\0'};
    // we can write the string like this also
    char str[]={"nishant"};
    for (int i = 0; i < sizeof(st); i++)
    {
        printf("%c",st[i]);
        
    }
    printf("\n");
    for (int i = 0; i < sizeof(str); i++)
    {
        printf("%c",str[i]);
        
    }
    return 0;
}