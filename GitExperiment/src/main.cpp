#include <iostream>
#include <string>
#include "math.hpp"

int main(int argc, char** argv) {
    if (argc != 4) {
        std::cout << "Usage: app <add|sub|mul|div|sdiv> <x> <y>\n";
        return 1;
    }

    std::string op = argv[1];
    int x = std::stoi(argv[2]);
    int y = std::stoi(argv[3]);

    try {
        if (op == "add") std::cout << add(x, y) << "\n";
        else if (op == "sub") std::cout << sub(x, y) << "\n";
        else if (op == "mul") std::cout << mul(x, y) << "\n";
        else if (op == "div") std::cout << divide(x, y) << "\n";
        else if (op == "sdiv") std::cout << safe_divide(x, y) << "\n";
        else {
            std::cerr << "Unknown op: " << op << "\n";
            return 1;
        }
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << "\n";
        return 1;
    }
    return 0;
}
