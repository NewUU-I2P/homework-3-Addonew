#include <iostream>

int main() {
    double price1, price2, price3;

    // Input prices
    std::cout << "Enter the price of product 1: $";
    std::cin >> price1;

    std::cout << "Enter the price of product 2: $";
    std::cin >> price2;

    std::cout << "Enter the price of product 3: $";
    std::cin >> price3;

    // Using the ternary conditional operator to find the highest price
    double highestPrice = (price1 > price2) ? ((price1 > price3) ? price1 : price3) : ((price2 > price3) ? price2 : price3);

    // Display the result
    std::cout << "The highest price is: $" << highestPrice << std::endl;

    return 0;
}
