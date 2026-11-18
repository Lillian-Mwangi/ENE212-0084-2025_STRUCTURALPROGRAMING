#include <stdio.h>

int main() {
    int arr[100];
    int n, i, max, min;

    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);

    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    // Assume the first element is both the biggest and smallest
    max = arr[0];
    min = arr[0];

    // Check the rest of the array to find actual max and min
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if we find a bigger number
        }
        if (arr[i] < min) {
            min = arr[i]; // Update min if we find a smaller number
        }
    }

    printf("\nMaximum element is : %d\n", max);
    printf("Minimum element is : %d\n", min);

    return 0;
}
