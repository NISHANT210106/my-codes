#include<stdio.h>
#include<string.h>
void encr(char str[],int strlen){
    for (int i = 0; i < strlen; i++)
    {
        str[i]=str[i]+i;
    }
}
void decr(char str[],int strlen){
    for (int i = 0; i < strlen; i++)
    {
        str[i]=str[i]-i;
    }
}

int main(){
    char str[]="my name is nishant";
    encr(str,strlen(str));
    printf("%s\n",str);
    decr(str,strlen(str));
    printf("%s",str);
    return 0;
}