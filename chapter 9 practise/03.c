#include <stdio.h>
void slice(char arr[]){
    int x,y;
    char new[30]={0};
    printf("enter the starting element number");
    scanf("%d",&x);
    printf("enter the ending element number");
    scanf("%d",&y);
    int j=0; 
    for (int i = x; i < y && arr[i] != '\0'; i++){
        new[j++]=arr[i]; 
    } 
    printf("%s",new);
}
int main(){
    char arr[30]="nishant";
    slice(arr);                                                                         
    return 0;
} 