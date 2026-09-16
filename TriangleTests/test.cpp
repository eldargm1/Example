#include "pch.h"
#include "Triangle.h"
#include <stdexcept>

// Тест 1: площадь считается правильно
TEST(TriangleTest, AreaCalculation) {
    Triangle t(10.0, 5.0);
    EXPECT_DOUBLE_EQ(t.area(), 25.0);
}

// Тест 2: площадь с дробными числами
TEST(TriangleTest, AreaWithFraction) {
    Triangle t(2.5, 4.0);
    EXPECT_DOUBLE_EQ(t.area(), 5.0);
}

// Тест 3: геттеры возвращают правильные значения
TEST(TriangleTest, GettersReturnCorrectValues) {
    Triangle t(7.0, 3.0);
    EXPECT_DOUBLE_EQ(t.getSide(), 7.0);
    EXPECT_DOUBLE_EQ(t.getHeight(), 3.0);
}

// Тест 4: сеттеры меняют значения
TEST(TriangleTest, SettersChangeValues) {
    Triangle t(1.0, 1.0);
    t.setSide(20.0);
    t.setHeight(10.0);
    EXPECT_DOUBLE_EQ(t.getSide(), 20.0);
    EXPECT_DOUBLE_EQ(t.getHeight(), 10.0);
    EXPECT_DOUBLE_EQ(t.area(), 100.0);
}

// Тест 5: отрицательная сторона → исключение
TEST(TriangleTest, NegativeSideThrows) {
    EXPECT_THROW(Triangle(-5.0, 3.0), std::invalid_argument);
}

// Тест 6: отрицательная высота → исключение
TEST(TriangleTest, NegativeHeightThrows) {
    EXPECT_THROW(Triangle(5.0, -3.0), std::invalid_argument);
}

// Тест 7: нулевая сторона → исключение
TEST(TriangleTest, ZeroSideThrows) {
    EXPECT_THROW(Triangle(0.0, 5.0), std::invalid_argument);
}

// Тест 8: сеттер с отрицательным значением → исключение
TEST(TriangleTest, SetterThrowsOnInvalid) {
    Triangle t(5.0, 5.0);
    EXPECT_THROW(t.setSide(-1.0), std::invalid_argument);
    EXPECT_THROW(t.setHeight(-1.0), std::invalid_argument);
}