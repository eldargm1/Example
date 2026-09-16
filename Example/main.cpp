#include <iostream>
#include <stdexcept>
#include "Triangle.h"

int main() {
    double a, h;

    std::cout << "Программа для расчёта площади треугольника.\n";
    std::cout << "Введите сторону треугольника: ";
    std::cin >> a;

    std::cout << "Введите высоту, проведённую к этой стороне: ";
    std::cin >> h;

    try {
        Triangle t(a, h);
        std::cout << "Площадь треугольника = " << t.area() << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << "Ошибка: " << e.what() << std::endl;
    }

    return 0;
}