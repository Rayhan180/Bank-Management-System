// RAYHAN HUSSAIN. PROJECT FOR DATA STRUCTURE IN C CLASS. 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure to represent a bank account
struct BankAccount {
    int accountNumber;
    char accountHolderName[50];
    double balance;
};

// Function to create a new bank account
struct BankAccount createAccount(int accountNumber, char name[], double initialBalance) {
    struct BankAccount account;
    account.accountNumber = accountNumber;
    strcpy(account.accountHolderName, name);
    account.balance = initialBalance;
    return account;
}

// Function to deposit funds into an account
void deposit(struct BankAccount *account, double amount) {
    account->balance += amount;
}

// Function to withdraw funds from an account
int withdraw(struct BankAccount *account, double amount) {
    if (account->balance >= amount) {
        account->balance -= amount;
        return 1; // Successful withdrawal
    }
    return 0; // Insufficient balance
}

// Function to check the balance of an account
double getBalance(struct BankAccount account) {
    return account.balance;
}

// Function to close an account
void closeAccount(struct BankAccount *account) {
    account->accountNumber = -1; // Mark the account as closed
}

int main() {
    struct BankAccount accounts[10]; // Simulate up to 10 accounts
    int numAccounts = 0;

    while (1) {
        printf("Bank Management System\n");
        printf("1. Create Account\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Check Balance\n");
        printf("5. Close Account\n");
        printf("6. Exit\n");

        int choice;
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (numAccounts < 10) {
                int accountNumber;
                char name[50];
                double initialBalance;
                printf("Enter account number: ");
                scanf("%d", &accountNumber);
                printf("Enter account holder name: ");
                scanf("%s", name);
                printf("Enter initial balance: ");
                scanf("%lf", &initialBalance);
                accounts[numAccounts] = createAccount(accountNumber, name, initialBalance);
                numAccounts++;
                printf("Account created successfully.\n");
            } else {
                printf("Maximum account limit reached.\n");
            }
        } else if (choice == 2) {
            int accountNumber;
            double amount;
            printf("Enter account number: ");
            scanf("%d", &accountNumber);
            printf("Enter deposit amount: ");
            scanf("%lf", &amount);

            int found = 0;
            for (int i = 0; i < numAccounts; i++) {
                if (accounts[i].accountNumber == accountNumber) {
                    deposit(&accounts[i], amount);
                    found = 1;
                    printf("Deposit successful. Updated balance: %.2lf\n", accounts[i].balance);
                    break;
                }
            }

            if (!found) {
                printf("Account not found.\n");
            }
        } else if (choice == 3) {
            int accountNumber;
            double amount;
            printf("Enter account number: ");
            scanf("%d", &accountNumber);
            printf("Enter withdrawal amount: ");
            scanf("%lf", &amount);

            int found = 0;
            for (int i = 0; i < numAccounts; i++) {
                if (accounts[i].accountNumber == accountNumber) {
                    int result = withdraw(&accounts[i], amount);
                    if (result) {
                        printf("Withdrawal successful. Updated balance: %.2lf\n", accounts[i].balance);
                    } else {
                        printf("Insufficient balance.\n");
                    }
                    found = 1;
                    break;
                }
            }

            if (!found) {
                printf("Account not found.\n");
            }
        } else if (choice == 4) {
            int accountNumber;
            printf("Enter account number: ");
            scanf("%d", &accountNumber);

            int found = 0;
            for (int i = 0; i < numAccounts; i++) {
                if (accounts[i].accountNumber == accountNumber) {
                    double balance = getBalance(accounts[i]);
                    printf("Account balance: %.2lf\n", balance);
                    found = 1;
                    break;
                }
            }

            if (!found) {
                printf("Account not found.\n");
            }
        } else if (choice == 5) {
            int accountNumber;
            printf("Enter account number to close: ");
            scanf("%d", &accountNumber);

            int found = 0;
            for (int i = 0; i < numAccounts; i++) {
                if (accounts[i].accountNumber == accountNumber) {
                    closeAccount(&accounts[i]);
                    printf("Account closed successfully.\n");
                    found = 1;
                    break;
                }
            }

            if (!found) {
                printf("Account not found.\n");
            }
        } else if (choice == 6) {
            printf("Exiting...\n");
            break;
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
