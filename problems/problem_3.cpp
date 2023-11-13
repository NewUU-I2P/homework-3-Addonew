#include <iostream>
#include <string>

int main() {
    char sex;
    double height;

    // Input sex
    std::cout << "Enter sex (M/F): ";
    std::cin >> sex;

    // Input height
    std::cout << "Enter height in meters: ";
    std::cin >> height;

    std::string result;

    // Determine the description based on sex and height
    if (sex == 'M') {
        if (height < 1.70) {
            result = "Short";
        } else if (height >= 1.70 && height < 1.85) {
            result = "Normal";
        } else {
            result = "Tall";
        }
    } else if (sex == 'F') {
        if (height < 1.60) {
            result = "Short";
        } else if (height >= 1.60 && height < 1.75) {
            result = "Normal";
        } else {
            result = "Tall";
        }
    } else {
        std::cout << "Invalid input for sex. Please enter 'M' or 'F'." << std::endl;
        return 1; // Exit with an error code
    }

    // Display the result
    std::cout << "Result: " << result << std::endl;

    return 0;
}
