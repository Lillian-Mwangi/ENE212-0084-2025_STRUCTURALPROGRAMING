#include <stdio.h>
#include <stdbool.h>
#include <string.h>

const char CORRECT_PIN[] = "1234";
double account_balance = 1000.0; // Starting balance

// Declaring functions so main knows they exist
bool login();
void checkBalance();
void deposit();
void withdraw();

int main() {
    printf("=== Welcome to the Simulated ATM ===\n");
    
    // Login verification
    if (!login()) {
        return 0; // Exit program immediately if login fails
    }

    int choice;
    // Loop until Exit
    while (true) {
        // Requirement 2: Show ATM Menu
        printf("\n--- ATM MENU ---\n");
        printf("1. Balance Inquiry\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Please select an option (1-4): ");
        
        // Read user choice
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            // Clear input buffer to prevent infinite loop on character input
            while (getchar() != '\n');
            continue;
        }
        
        // Handle User Choice
        switch (choice) {
            case 1:
                checkBalance();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                printf("\nThank you for using the ATM. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please select a valid option from the menu.\n");
        }
    }
    return 0;
}

//  Login / PIN Verification Function
bool login() {
    char entered_pin[20];
    int attempts = 3;
    
    while (attempts > 0) {
        printf("Enter your 4-digit PIN: ");
        scanf("%s", entered_pin);
        
        if (strcmp(entered_pin, CORRECT_PIN) == 0) {
            printf("\nLogin successful!\n");
            return true;
        } else {
            attempts--;
            printf("Incorrect PIN. Attempts remaining: %d\n", attempts);
        }
    }
    
    printf("\nToo many incorrect attempts. Access denied.\n");
    return false;
}

//  Balance Inquiry
void checkBalance() {
    printf("\nYour current balance is: $%.2f\n", account_balance);
}

// Deposit Function with Validation
void deposit() {
    double amount;
    printf("Enter the amount to deposit: $");
    
    if (scanf("%lf", &amount) != 1) {
        printf("Error: Invalid numerical input.\n");
        while (getchar() != '\n');
        return;
    }
    
    if (amount > 0) {
        account_balance += amount;
        printf("Successfully deposited $%.2f.\n", amount);
        checkBalance();
    } else {
        printf("Error: Deposit amount must be positive.\n");
    }
}

// Withdraw Function with Validation
void withdraw() {
    double amount;
    printf("Enter the amount to withdraw: $");
    
    if (scanf("%lf", &amount) != 1) {
        printf("Error: Invalid numerical input.\n");
        while (getchar() != '\n');
        return;
    }
    
    if (amount <= 0) {
        printf("Error: Withdrawal amount must be positive.\n");
    } else if (amount > account_balance) {
        printf("Error: Insufficient funds. Your balance is $%.2f.\n", account_balance);
    } else {
        account_balance -= amount;
        printf("Successfully withdrew $%.2f.\n", amount);
        checkBalance();
    }
}
