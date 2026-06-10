#include <iostream>

using namespace std;

int main() {
    char op;
    double num1, num2;

    // Prompt user for the math operator
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    // Prompt user for the two numeric inputs
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Evaluate the operator and display the result
    switch (op) {
        case '+':
            cout << "Result: " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
            
        case '-':
            cout << "Result: " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
            
        case '*':
            cout << "Result: " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
            
        case '/':
            // Safety check to prevent crash from dividing by zero
            if (num2 != 0) {
                cout << "Result: " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero is not allowed!" << endl;
            }
            break;
            
        default:
            // Handles any character that is not one of our 4 operators
            cout << "Error: Invalid operator entered!" << endl;
            break;
    }

    return 0;
}
