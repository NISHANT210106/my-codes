#include <stdio.h>

int main()
{
    int num;
    printf("enter your number:- ");
    scanf("%d",&num);
    int prime=0;
    for (int i = 2; i < num; i++)
    {
        if (num%i==0)
        {
            prime=1;
            break;
        }
        
    }
    if (prime==1)
    {
        printf("your number %d is not a prime number",num);
    }
    else
    {
        printf("your number is a prime number");
    }
    
    

    return 0;
}
