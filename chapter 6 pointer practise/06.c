 #include<stdio.h>
 #include<string.h>
 
 int main(){
    int a =21;
    int* b= &a;
    int** c = &b;
    printf("your number is %d",**(c));

    return 0;
 }