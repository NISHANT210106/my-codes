#include<stdio.h>
int main()
{
    int n, isprime;
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        isprime = 1;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                isprime = 0;
                break;
            }
        }
        if (isprime == 1)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}