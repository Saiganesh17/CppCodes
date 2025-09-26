#include <iostream>
using namespace std;

void Calculator() {
    int choice;
    float a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Choose operation: \n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Result: " << a + b << endl;
            break;
        case 2:
            cout << "Result: " << a - b << endl;
            break;
        case 3:
            cout << "Result: " << a * b << endl;
            break;
        case 4:
            if (b != 0)
                cout << "Result: " << a / b << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }
}

int main() {
    Calculator();
    return 0;
}