//#include <iostream>
//using namespace std;
//
//class Vehicle {
//public:
//    virtual void start() = 0;
//    virtual void stop() = 0;
//};
//
//class Car : public Vehicle {
//public:
//    void start() override {
//        cout << "Starting the car" << endl;
//    }
//
//    void stop() override {
//        cout << "Stopping the car" << endl;
//    }
//};
//
//class Motorcycle : public Vehicle {
//public:
//    void start() override {
//        cout << "Starting the motorcycle" << endl;
//    }
//
//    void stop() override {
//        cout << "Stopping the motorcycle" << endl;
//    }
//
//    void performStunts() {
//        cout << "Performing stunts on the motorcycle" << endl;
//    }
//};
//
//int main() {
//    Car car;
//    car.start();
//    car.stop();
//
//    Motorcycle motorcycle;
//    motorcycle.start();
//    motorcycle.performStunts();
//    motorcycle.stop();
//
//    return 0;
//}
