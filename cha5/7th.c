#include <stdio.h>
void patt(int);
void patt(int x)
{
    int star = 1;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= star; j++)
        {
            printf("* ");
        }
        star += 2;
        printf("\n");
    }
}
int main()
{
    patt(10);
    return 0;
}
