#include <iostream>
#include <string>
#include "math.hpp"

int main(int argc, char** argv) {
    if (argc != 4) {
        std::cout << "Usage: " << argv[0] << " add|sub a b\n";
        return 1;
    }

    std::string op = argv[1];
    int a = std::stoi(argv[2]);
    int b = std::stoi(argv[3]);

    if (op == "add") {
        std::cout << add(a, b) << "\n";
    } else if (op == "sub") {
        std::cout << sub(a, b) << "\n";
    } else {
        std::cerr << "Unknown operation: " << op << "\n";
        return 1;
    }

    return 0;
}
