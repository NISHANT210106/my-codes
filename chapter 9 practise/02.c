#include <stdio.h>
int count(char arr[]);
int count(char arr[])
{
    int c = 0;
    for (int i = 0;; i++)
    {
        if (arr[i] == '\0')
        {
            break;
        }
        else
        {
            c++;
        }
    }
    return c;
}
int main()
{
    char arr[20] = "hello";
    printf("%d", count(arr));
    return 0;
}