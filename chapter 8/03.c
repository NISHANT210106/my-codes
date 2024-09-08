#include <stdio.h>
void printarr(int arr[], int size);
void arange(int arr[], int size);
void printarr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("[%d]  ", arr[i]);
    }
    printf("\n");
}
void arange(int arr[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}
int main()
{
    int arr[6] = {12, 64, 52, 14, 88, 53};
    printarr(arr, 6);
    arange(arr, 6);
    printarr(arr, 6);
    return 0;
}
