#include <iostream>
#include <cmath>

class Triangle {
private:
    double side1, side2, side3;

public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    void printAreaAndPerimeter() {
        double s = (side1 + side2 + side3) / 2;
        double area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
        double perimeter = side1 + side2 + side3;

        std::cout << "Area: " << area << std::endl;
        std::cout << "Perimeter: " << perimeter << std::endl;
    }
};

int main() {
    Triangle triangle(3, 4, 5);
    triangle.printAreaAndPerimeter();

    return 0;
}
