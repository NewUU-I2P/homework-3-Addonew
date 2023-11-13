#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::string macAddress;

    // Input MAC address
    std::cout << "Enter MAC address (in x:x:x:x:x:x format): ";
    std::cin >> macAddress;

    // Validate the MAC address format
    std::istringstream iss(macAddress);
    int octet;
    char delimiter;

    for (int i = 0; i < 5; ++i) {
        if (!(iss >> std::hex >> octet) || !(iss >> delimiter) || delimiter != ':') {
            std::cout << "Invalid MAC address format." << std::endl;
            return 1; // Exit with an error code
        }
    }

    if (!(iss >> std::hex >> octet)) {
        std::cout << "Invalid MAC address format." << std::endl;
        return 1; // Exit with an error code
    }

    // Determine the type of MAC address
    if (octet == 0xFF) {
        std::cout << "The MAC address is broadcast." << std::endl;
    } else if (octet % 2 == 0) {
        std::cout << "The MAC address is unicast." << std::endl;
    } else {
        std::cout << "The MAC address is multicast." << std::endl;
    }

    return 0;
}
