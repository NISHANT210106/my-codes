#include<stdio.h>
void strcopy(char *dest,const char *src){
    while (*src != '\0')
    {
        *dest=  *src;
        dest++;
        src++;
    }
    *dest ='\0';
}
int main(){
    char arr2[20];
    char arr1[]="hello";
    strcopy(arr2,arr1);
    printf("%s",arr2);
    return 0;
}