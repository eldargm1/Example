
#include "Triangle.h"
#include <stdexcept>

Triangle::Triangle(double side, double height) {
    setSide(side);
    setHeight(height);
}

double Triangle::getSide() const {
    return side;
}

double Triangle::getHeight() const {
    return height;
}

void Triangle::setSide(double side) {
    if (side <= 0) {
        throw std::invalid_argument("Сторона должна быть положительной");
    }
    this->side = side;
}

void Triangle::setHeight(double height) {
    if (height <= 0) {
        throw std::invalid_argument("Высота должна быть положительной");
    }
    this->height = height;
}

double Triangle::area() const {
    return 0.5 * side * height;
}