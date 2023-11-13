#include <iostream>

int main() {
    char operation;
    int operand1, operand2;

    // Input arithmetic operation
    std::cout << "Enter the arithmetic operation (+, -, *, /): ";
    std::cin >> operation;

    // Input operands
    std::cout << "Enter the first integer: ";
    std::cin >> operand1;

    std::cout << "Enter the second integer: ";
    std::cin >> operand2;

    // Perform the arithmetic operation and display the result
    switch (operation) {
        case '+':
            std::cout << "Result: " << operand1 + operand2 << std::endl;
            break;
        case '-':
            std::cout << "Result: " << operand1 - operand2 << std::endl;
            break;
        case '*':
            std::cout << "Result: " << operand1 * operand2 << std::endl;
            break;
        case '/':
            if (operand2 != 0) {
                std::cout << "Result: " << static_cast<double>(operand1) / operand2 << std::endl;
            } else {
                std::cout << "Error: Division by zero is not allowed." << std::endl;
            }
            break;
        default:
            std::cout << "Error: Invalid arithmetic operation." << std::endl;
    }

    return 0;
}
