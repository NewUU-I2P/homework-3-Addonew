#include <iostream>

int main() {
    double waterConsumption;
    std::cout << "Enter the water consumption in cubic meters: ";
    std::cin >> waterConsumption;

    double cost = 13.0;  // Fixed amount

    if (waterConsumption > 30) {
        cost += 30 * 0.4; // Charge for the first 30 cubic meters
        waterConsumption -= 30;
    } else {
        cost += waterConsumption * 0.4;
        waterConsumption = 0;
    }

    if (waterConsumption > 20) {
        cost += 20 * 0.12; // Charge for the next 20 cubic meters
        waterConsumption -= 20;
    } else {
        cost += waterConsumption * 0.12;
        waterConsumption = 0;
    }

    if (waterConsumption > 10) {
        cost += 10 * 1.4; // Charge for the next 10 cubic meters
        waterConsumption -= 10;
    } else {
        cost += waterConsumption * 1.4;
        waterConsumption = 0;
    }

    cost += waterConsumption * 1.5; // Charge for every additional cubic meter

    std::cout << "Total cost: $" << cost << std::endl;

    return 0;
}
