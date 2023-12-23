#include <iostream>
#include <string>
using namespace std;

#include "functions.h"

bool isEven(int* num) {
    return (*num % 2 == 0);
}

int square(int* num) {
    return (*num * *num);
}

int multiply(int* num1, int* num2) {
    return (*num1 * *num2);
}

int maxDivisor(int* num) {
    int maxDiv = 1;
    for (int i = 2; i <= *num; i++) {
        if (*num % i == 0) {
            maxDiv = i;
        }
    }
    return maxDiv;
}

bool isFibonacci(int* num) {
    int a = 0;
    int b = 1;
    while (b < *num) {
        int temp = b;
        b += a;
        a = temp;
    }
    return (b == *num);
}

int reverse(int* num) {
    int reversed = 0;
    while (*num != 0) {
        reversed = reversed * 10 + (*num % 10);
        *num /= 10;
    }
    return reversed;
}


int main() {
    int num1 = 6;
    int num2 = 7;
    int num3 = 12;
    int num4 = 30;
    int num5 = 144;
    int num6 = 12345;

    std::cout << num1 << " is even: " << isEven(&num1) << std::endl;
    std::cout << num2 << " is even: " << isEven(&num2) << std::endl;

    std::cout << num3 << " squared: " << square(&num3) << std::endl;

    std::cout << num1 << " * " << num2 << " = " << multiply(&num1, &num2) << std::endl;

    std::cout << "Max divisor of " << num4 << ": " << maxDivisor(&num4) << std::endl;

    std::cout << num5 << " is Fibonacci: " << isFibonacci(&num5) << std::endl;
    std::cout << num6 << " reversed: " << reverse(&num6) << std::endl;

    return 0;
}
