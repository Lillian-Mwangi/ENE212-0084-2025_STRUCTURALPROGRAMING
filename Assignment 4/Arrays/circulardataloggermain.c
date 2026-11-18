#include <stdio.h>

#define BUFFER_SIZE 5

int buffer[BUFFER_SIZE];
int writeIndex = 0; // Where the next new value will be saved
int count = 0;      // How many items are currently in the buffer

// Function to add a new sensor reading
void insertSample(int value) {
    buffer[writeIndex] = value;
    
    // Move to next spot, and wrap back to 0 if we hit the end
    writeIndex = (writeIndex + 1) % BUFFER_SIZE;
    
    // Keep track of how many items are stored until buffer is full
    if (count < BUFFER_SIZE) {
        count++;
    }
}

// Function to print values from oldest to newest
void printSamples() {
    int i, start, index;

    if (count == 0) {
        printf("Buffer is empty.\n");
        return;
    }

    // If buffer is full, the oldest item is at writeIndex
    if (count == BUFFER_SIZE) {
        start = writeIndex;
    } else {
        start = 0; // Otherwise, it starts at the beginning
    }

    printf("Stored samples (oldest -> newest): ");
    for (i = 0; i < count; i++) {
        index = (start + i) % BUFFER_SIZE;
        printf("%d ", buffer[index]);
    }
    printf("\n");
}

int main() {
    int choice, sensorValue;

    // Keep showing the menu until the user chooses to exit
    while (1) {
        printf("\n--- Circular Data Logger ---\n");
        printf("1. Enter new sensor value\n");
        printf("2. Print stored samples\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter sensor value: ");
            scanf("%d", &sensorValue);
            insertSample(sensorValue);
        } 
        else if (choice == 2) {
            printSamples();
        } 
        else if (choice == 3) {
            printf("Exiting program.\n");
            break;
        } 
        else {
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
