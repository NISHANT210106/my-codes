#include<stdio.h>
int main(){
    // a string ends with a \0 which mean it ends the string here
    char st[20];
    // we can write the string like this also
    char str[]={"nishant"};
    scanf("%s",&st);
    printf("%s \n",st);
    printf("%s",str);
}