#include <iostream>
#include <string>
using namespace std;

class Wheel {
private:
	double diameter;
	string tireType;

public:
	Wheel(double diameter, string tireType) : diameter(diameter), tireType(TireType) {}

	void setDiameter(double diameter) {
		this->diameter = diameter;
	}
	double getDiameter() {
		return diameter;
	}

	void setTireType(string tireType) {
		this->tireType = tireType;
	}
	double getTireType() {
		return tireType;
	};
};

class Car {
private:
	Wheel* wheel5;

public:
	Car(Wheel* frontLeft, Wheel* frontRight, Wheel* rearLeft, Wheel* rearRight) {
		wheel1 = frontLeft;
		wheel2 = frontRight;
		wheel3 = rearLeft;
		wheel4 = rearRight;
	};

	void move() {
		cout << "Car is moving using " << wheel1->getTireType() << " tires" << endl;
	}

	void stop() {
		cout << "Car has stopped" << endl;
	}
};

int main() {
	Wheel* frontLeft = new Wheel(18, "all-season");
	Wheel* frontRight = new Wheel(18, "all-season");
	Wheel* rearLeft = new Wheel(18, "all-season");
	Wheel* rearRight = new Wheel(18, "all-season");

	Car car(frontLeft, frontRight, rearLeft, rearRight);

	car.move();
	car.stop();

	delete frontLeft;
	delete frontRight;
	delete rearLeft;
	delete rearRight;

	return 0;
}