#include <stdio.h>
void ten(int *x)
{
    *x = (*x) * 10;
}
int main()
{
    int a = 10;
    ten(&a);
    printf("%d", a);
    return 0;
}
