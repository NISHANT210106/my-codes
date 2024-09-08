#include <stdio.h>

int main()
{
    int num, multi, sum;
    num = 8;
    multi = 1;
    sum = 0;
    int j;
    for (multi; multi <= 10; multi++)
    {
        j = num * multi;
        sum += j;
    }
    printf("sum of 8 table is %d\n", sum);

    return 0;
}
