#include <iostream>
#include <cmath>
using namespace std;

class rightTriangle {
private:
	double a;
	double b;
public:
	rightTriangle(double len, double wid) : a(len), b(wid) {}

	double calculateArea() {
		return a * b / 2;
	}

	double calculateHypotenuse() {
		return sqrt(pow(a, 2) + pow(b, 2));
	}
};

int main()
{
	double a, b;
	cout << "Length of A: ";
	cin >> a;
	cout << "Length of B: ";
	cin >> b;

	rightTriangle triangle(a, b);

	double area = triangle.calculateArea();
	cout << "\nArea: " << area << endl;

	double hypotenuse = triangle.calculateHypotenuse();
	cout << "Hypotenuse: " << hypotenuse << endl;

	return 0;
}
