#include <stdio.h>
#include <string.h>
int main(){
    
    char str[] = "hello nice";
    char no[30];
    strcpy(no,str);
    printf("%s",no);
    return 0;
}