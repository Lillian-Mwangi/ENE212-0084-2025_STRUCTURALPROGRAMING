#include <stdio.h>

int main() {
    int arr[100]; // Array to hold up to 100 numbers
    int n, i;

    printf("Input the number of elements to store in the array :");
    scanf("%d", &n);

    // Loop to get numbers from the user
    printf("Input %d number of elements in the array :\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    // Print the numbers in normal order
    printf("\nThe values store into the array are : ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Print the numbers backwards starting from the last index (n - 1)
    printf("\nThe values store into the array in reverse are : ");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
