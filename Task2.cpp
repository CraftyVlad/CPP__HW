#include <iostream>
#include <cmath>

int main()
{
	double a;
	double b;
	double c;

	std::cout << "Enter the side of A: ";
	std::cin >> a;

	std::cout << "Enter the size of B: ";
	std::cin >> b;

	c = sqrt(pow(a, 2) + pow(b, 2));

	float area;
	area = a * b / 2;

	std::cout << "\nArea of triangle is : " << area << std::endl;

	std::cout << "Hypotenuse is: " << c << std::endl;

	return 0;
}
