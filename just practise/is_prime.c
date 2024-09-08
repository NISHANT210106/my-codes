#include <stdio.h>

int main(){
    
    int a, count = 0;
    scanf("%d", &a);
    for (int i = 2; i < a; i++){
        if (a % i == 0)
        {
            count++;
        }
    }
    if (count == 0){
        printf("it is a prime");
    }
    else{
        printf("your number is not a prime");
    }

    return 0;
}