#include <stdio.h>

int main()
{
    int i;
    float a;
    i = 2101;
    int* j = &i;
    int** m= &j;
    a = 200;
    float *b = &a;

    printf("this is the value = %d\n", i);
    printf("this is the value in pointer = %p\n", j);
    printf("this is the value = %f\n", a);
    printf("this is the value in pointer = %p\n", b);
    printf("the value stored where b is pointing is %f\n",*b);
    printf("the value stored where j is pointing is %d\n",*j);
    printf("the value stored where j is pointing is %d\n",**(m));
    return 0;
}
