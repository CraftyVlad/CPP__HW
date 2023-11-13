#include <iostream>
using namespace std;

class Number {
public:
    virtual void add(Number* num) = 0;
    virtual void subtract(Number* num) = 0;
    virtual void multiply(Number* num) = 0;
    virtual void divide(Number* num) = 0;
    virtual void display() = 0;
};

class Integer : public Number {
private:
    int value;
public:
    Integer(int val) : value(val) {}

    void add(Number* num) override {
        Integer* intNum = dynamic_cast<Integer*>(num);
        if (intNum) {
            value += intNum->value;
        }
    }

    void subtract(Number* num) override {
        Integer* intNum = dynamic_cast<Integer*>(num);
        if (intNum) {
            value -= intNum->value;
        }
    }

    void multiply(Number* num) override {
        Integer* intNum = dynamic_cast<Integer*>(num);
        if (intNum) {
            value *= intNum->value;
        }
    }

    void divide(Number* num) override {
        Integer* intNum = dynamic_cast<Integer*>(num);
        if (intNum && intNum->value != 0) {
            value /= intNum->value;
        }
    }

    void display() override {
        cout << "Integer value: " << value << endl;
    }
};

class Real : public Number {
private:
    double value;
public:
    Real(double val) : value(val) {}

    void add(Number* num) override {
        Real* realNum = dynamic_cast<Real*>(num);
        if (realNum) {
            value += realNum->value;
        }
    }

    void subtract(Number* num) override {
        Real* realNum = dynamic_cast<Real*>(num);
        if (realNum) {
            value -= realNum->value;
        }
    }

    void multiply(Number* num) override {
        Real* realNum = dynamic_cast<Real*>(num);
        if (realNum) {
            value *= realNum->value;
        }
    }

    void divide(Number* num) override {
        Real* realNum = dynamic_cast<Real*>(num);
        if (realNum && realNum->value != 0) {
            value /= realNum->value;
        }
    }

    void display() override {
        cout << "Real value: " << value << endl;
    }
};

int main() {
    Number* num1 = new Integer(5);
    Number* num2 = new Integer(3);

    num1->add(num2);
    num1->display();

    Number* num3 = new Real(5.5);
    Number* num4 = new Real(2.2);

    num3->multiply(num4);
    num3->display();

    delete num1;
    delete num2;
    delete num3;
    delete num4;

    return 0;
}