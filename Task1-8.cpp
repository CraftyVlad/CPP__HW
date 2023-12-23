#include <iostream>
#include <string>
using namespace std;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void increment(int* num) {
    (*num)++;
}

bool isEven(int* num) {
    return (*num % 2 == 0);
}

int square(int* num) {
    return (*num * *num);
}

int multiply(int* num2, int* num3) {
    return (*num2 * *num3);
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
    int x = 5;
    int y = 10;
    int* ptr1 = &x;
    int* ptr2 = &y;
    int num1 = 5;
    int* ptr = &num1;
    int num2 = 6;
    int num3 = 7;
    int num4 = 12;
    int num5 = 30;
    int num6 = 144;
    int num7 = 12345;

    cout << "Before: x = " << x << ", y = " << y << endl;
    swap(ptr1, ptr2);
    cout << "After: x = " << x << ", y = " << y << endl;

    cout << "Before: " << num1 << endl;
    increment(ptr);
    cout << "After: " << num1 << endl;

    cout << num2 << " is even: " << isEven(&num2) << endl;
    cout << num3 << " is even: " << isEven(&num3) << endl;

    cout << num4 << " squared: " << square(&num4) << endl;

    cout << num2 << " * " << num3 << " = " << multiply(&num2, &num3) << endl;

    cout << "Max divisor of " << num5 << ": " << maxDivisor(&num5) << endl;

    cout << num6 << " is Fibonacci: " << isFibonacci(&num6) << endl;
    cout << num7 << " reversed: " << reverse(&num7) << endl;

    return 0;
}
