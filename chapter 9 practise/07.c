#include <stdio.h>
#include <string.h>
int main()
{
    char str[30], ch, found=0;
    fgets(str,sizeof(str),stdin);
    printf("ENTER THE CHAR YOU WANT TO CHECK THE APPEREANCE");
    scanf("%c", &ch);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == ch)
        {
            printf("your character %c is prestent in string", ch);
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("your charecter %c is not present in string",ch);
    }

    return 0;
}
