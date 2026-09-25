#include <iostream>
#include <stdexcept>
#include "Triangle.h"

int main() {
    double side, height;

    std::cout << "Triangle area calculator\n";
    std::cout << "Enter the side: ";
    if (!(std::cin >> side)) {
        std::cerr << "Error: enter a number\n";
        return 1;
    }

    std::cout << "Enter the height: ";
    if (!(std::cin >> height)) {
        std::cerr << "Error: enter a number\n";
        return 1;
    }

    try {
        Triangle triangle(side, height);
        std::cout << "Area = " << triangle.area() << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}