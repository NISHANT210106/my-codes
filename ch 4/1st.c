#include <stdio.h>

int main()
{
    // declaring the variable
    int n, s, b;
    printf("enter your number for table:- ");
    scanf("%d", &n);
    s = 10;
    //executing the loop
    while (s >= 1)
    {
        b = n * s;
        printf("%d x %d = %d \n", n, s, b);
        s--;
    }

    return 0;
}