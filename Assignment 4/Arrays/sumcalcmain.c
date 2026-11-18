#include <stdio.h>

int main() {
    int arr[100];
    int n, i;
    int sum = 0; // Variable to store the total sum

    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);

    // Read elements into the array
    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    // Loop through the array and add each number to sum
    for (i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    printf("\nSum of all elements stored in the array is : %d\n", sum);

    return 0;
}
