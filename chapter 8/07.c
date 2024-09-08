#include <stdio.h>
int main()
{
    int arr[3][10];
    int a,b,c;
    printf("enter your number");
    scanf("%d %d %d",&a,&b,&c);
    
    for (int i = 0; i < 10; i++)
    {
        arr[0][i] = a * (i + 1);
        arr[1][i] = b * (i + 1);
        arr[2][i] = c * (i + 1);
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("[%d]", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}