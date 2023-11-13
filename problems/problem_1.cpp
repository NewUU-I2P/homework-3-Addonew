#include <iostream>

int main() {
    double waterConsumption;
    std::cout << "Enter the water consumption in cubic meters: ";
    std::cin >> waterConsumption;

    double cost = 13.0;  // Fixed amount
    double remainingConsumption = waterConsumption; // Remaining consumption to be charged

    if (remainingConsumption > 30) {
        cost += 30 * 0.4; // Charge for the first 30 cubic meters
        remainingConsumption -= 30;
    } else {
        cost += remainingConsumption * 0.4;
        remainingConsumption = 0;
    }

    if (remainingConsumption > 20) {
        cost += 20 * 0.12; // Charge for the next 20 cubic meters
        remainingConsumption -= 20;
    } else {
        cost += remainingConsumption * 0.12;
        remainingConsumption = 0;
    }

    if (remainingConsumption > 10) {
        cost += 10 * 1.4; // Charge for the next 10 cubic meters
        remainingConsumption -= 10;
    } else {
        cost += remainingConsumption * 1.4;
        remainingConsumption = 0;
    }

    cost += remainingConsumption * 1.5; // Charge for every additional cubic meter

    std::cout << "Total cost: $" << cost << std::endl;

    return 0;
}
