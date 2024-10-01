#include <stdio.h>
#include <string.h>
int main()
{
    char str[30], ch;
    int count = 0;
    gets(str);
    printf("ENTER THE CHAR YOU WANT TO CHECK THE APPEREANCE");
    scanf("%c", &ch);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == ch)
        {
            count++;
        }
    }
    printf("the number of time character %c appeared in string is %d", ch, count);

    return 0;
}
