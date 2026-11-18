#include <stdio.h>

int main() {
    // Create and fill a 2D array with 6 rows and 4 columns
    int matrix[6][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
        {17, 18, 19, 20},
        {21, 22, 23, 24}
    };
    
    int row, col;

    printf("2D Array Elements (6 rows and 4 columns):\n");

    // Outer loop goes through each row (0 to 5)
    for (row = 0; row < 6; row++) {
        // Inner loop goes through each column in that row (0 to 3)
        for (col = 0; col < 4; col++) {
            printf("%d\t", matrix[row][col]); // \t adds a tab space between numbers
        }
        printf("\n"); // Move to a new line after printing each row
    }

    return 0;
}
