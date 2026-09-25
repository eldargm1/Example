#include "Triangle.h"
#include <stdexcept>

Triangle::Triangle(double side, double height) {
    setSide(side);
    setHeight(height);
}

double Triangle::getSide() const noexcept { return side; }
double Triangle::getHeight() const noexcept { return height; }

void Triangle::setSide(double side) {
    if (side <= 0) {
        throw std::invalid_argument("Side must be positive");
    }
    this->side = side;
}

void Triangle::setHeight(double height) {
    if (height <= 0) {
        throw std::invalid_argument("Height must be positive");
    }
    this->height = height;
}

double Triangle::area() const noexcept {
    return 0.5 * side * height;
}