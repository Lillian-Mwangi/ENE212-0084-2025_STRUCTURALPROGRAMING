#include <stdio.h>

int main() {
    int arr[100];
    int n, i, value, pos;

    printf("Input the size of array : ");
    scanf("%d", &n);

    printf("Input %d elements in the array in ascending order:\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Input the value to be inserted : ");
    scanf("%d", &value);
    printf("Input the Position, where the value to be inserted :");
    scanf("%d", &pos);

    printf("\nThe current list of the array : ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Shift elements to the right to create an empty spot
    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Put the new value in the spot (pos - 1 because array index starts at 0)
    arr[pos - 1] = value;
    n++; // Increase the total size of the array by 1

    printf("\nAfter Insert the element the new list is : ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
