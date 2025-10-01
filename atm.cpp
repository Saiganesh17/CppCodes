#include <iostream>
using namespace std;

// Function to display the menu
void showMenu() {
    cout << "********************" << endl;
    cout << "*      Bank Menu    *" << endl;
    cout << "********************" << endl;
    cout << "* 1. Check Balance  *" << endl;
    cout << "* 2. Deposit        *" << endl;
    cout << "* 3. Withdraw       *" << endl;
    cout << "* 4. Exit           *" << endl;
    cout << "********************" << endl;
}

int main() {
    int option;
    double balance = 5000.0; // Initial balance

    do {
        showMenu();
        cout << "Select option from the given menu: ";
        cin >> option;

        switch (option) {
            case 1:
                cout << "Your current balance is: $" << balance << endl;
                system("pause");
                system("cls");
                break;
            case 2:
                cout << "Enter amount to deposit: $";
                double depositAmount;
                cin >> depositAmount;
                if (depositAmount > 0) {
                    balance += depositAmount;
                    cout << "Deposit successful. New balance: $" << balance << endl;
                } else {
                    cout << "Invalid deposit amount." << endl;
                }
                system("pause");
                system("cls");
                break;
            case 3:
                cout << "Enter amount to withdraw: $";
                double withdrawAmount;
                cin >> withdrawAmount;
                if (withdrawAmount > 0 && withdrawAmount <= balance) {
                    balance -= withdrawAmount;
                    cout << "Withdrawal successful. New balance: $" << balance << endl;
                } else if (withdrawAmount > balance) {
                    cout << "Insufficient funds." << endl;
                } else {
                    cout << "Invalid withdrawal amount." << endl;
                }
                system("pause");
                system("cls");
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid option. Please choose a valid option." << endl;
                system("pause");
                system("cls");
        }
    } while (option != 4);

    return 0;
}
