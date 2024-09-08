#include <stdio.h>
void count(int arr[], int size)
{
    int num = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            num++;
        }
    }
    printf("the number of positive element in given aray is %d ", num);
}
int main()
{
    int arr[] = {10, 23, -45, 67, -54, 54, -66, 44, 35, 35, 69};
    count(arr, 11);
    return 0;
}