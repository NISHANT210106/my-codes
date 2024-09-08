#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    printf("enter your number:- ");
    int count = (rand() % 100) + 1;
    int c;
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &c);
        if (count == c)
        {
            printf("Congratualtion you guessed is correct = %d \n", count);
            printf("Number of tries are = %d", i);
            break;
        }
        else if (count > c)
        {
            printf("Go higher :- ");
        }
        else if (count < c)
        {
            printf("Go lower :- ");
        }
    }
    return 0;
}