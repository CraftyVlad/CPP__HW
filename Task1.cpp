#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double len, double wid) : length(len), width(wid) {}

    double calculateArea() {
        return length * width;
    }

    double calculatePerimeter() {
        return 2 * (length + width);
    }
};

int main() {

    double length, width;
    std::cout << "Input the length of the rectangle: ";
    std::cin >> length;
    std::cout << "Input the width of the rectangle: ";
    std::cin >> width;

    Rectangle rectangle(length, width);

    double area = rectangle.calculateArea();
    std::cout << "\nArea: " << area << std::endl;

    double perimeter = rectangle.calculatePerimeter();
    std::cout << "Perimeter: " << perimeter << std::endl;

    return 0;
}