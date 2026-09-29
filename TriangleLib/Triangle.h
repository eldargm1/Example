#pragma once

class Triangle {
private:
    double side;
    double height;

public:
    Triangle(double side, double height);

    double getSide() const noexcept;
    double getHeight() const noexcept;
    void setSide(double side);
    void setHeight(double height);

    double calculateArea() const noexcept;
};