#include <iostream>

int main() {
    double a, h, S;

    std::cout << "Программа для расчёта площади треугольника.\n";
    std::cout << "Введите сторону треугольника: ";
    std::cin >> a;

    std::cout << "Введите высоту, проведённую к этой стороне: ";
    std::cin >> h;

    S = 0.5 * a * h;

    std::cout << "Площадь треугольника = " << S << std::endl;

    return 0;
}