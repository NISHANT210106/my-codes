#include <stdio.h>

int main() {
    int count;
    printf("Enter the number of rows: ");
    scanf("%d", &count);

    for (int i = 1; i <= count; i++) {
        // Print spaces
        for (int j = 0; j < count - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 0; k < i; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}