// RAYHAN HUSSAIN. PROJECT FOR DATA STRUCTURE IN C CLASS. 
#include <stdio.h>

// Define a structure to represent an account
struct Account {
    int accountNumber;
    double balance;
};

// Use the const keyword for fixed data
const double interestRate = 0.05;

// Compiler optimization is implied

// Use the volatile keyword for hardware-related variables
volatile int hardwareRegister;

// Padding consideration is not explicitly shown in this example

// Define a structure to represent different transaction types
union Transaction {
    double deposit;
    double withdrawal;
};

// Function to calculate the interest on an account
double calculateInterest(const struct Account *account) {
    return account->balance * interestRate;
}

// Function to process transactions
void processTransaction(struct Account *account, union Transaction transaction) {
    if (transaction.deposit > 0) {
        account->balance += transaction.deposit;
    } else {
        account->balance -= transaction.withdrawal;
    }
}

int main() {
    // Create an account
    struct Account myAccount = {12345, 1000.0};

    // Use the functions to calculate interest and process transactions
    double interest = calculateInterest(&myAccount);
    printf("Interest: %.2f\n", interest);

    union Transaction deposit = {100.0};
    processTransaction(&myAccount, deposit);
    printf("Balance after deposit: %.2f\n", myAccount.balance);

    union Transaction withdrawal = {50.0};
    processTransaction(&myAccount, withdrawal);
    printf("Balance after withdrawal: %.2f\n", myAccount.balance);

    return 0;
}
