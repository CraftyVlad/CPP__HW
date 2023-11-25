#include <iostream>
#include <string>
using namespace std;

class Wheel {
private:
    double diameter;
    string tireType;

public:
    Wheel(double diameter, string tireType) : diameter(diameter), tireType(tireType) {}

    void setDiameter(double diameter) {
        this->diameter = diameter;
    }

    double getDiameter() const {
        return diameter;
    }

    void setTireType(string tireType) {
        this->tireType = tireType;
    }

    string getTireType() const {
        return tireType;
    }
};

class Car {
private:
    Wheel* wheels[4];

public:
    Car(Wheel* frontLeft, Wheel* frontRight, Wheel* rearLeft, Wheel* rearRight) {
        wheels[0] = frontLeft;
        wheels[1] = frontRight;
        wheels[2] = rearLeft;
        wheels[3] = rearRight;
    }

    void move() {
        cout << "Car is moving using " << wheels[0]->getTireType() << " tires" << endl;
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
