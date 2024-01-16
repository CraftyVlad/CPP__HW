#include <iostream>
#include <cstring>

using namespace std;

int mystrcmp(const char* str1, const char* str2);
int StringToNumber(char* str);
char* NumberToString(int number);
char* Uppercase(char* str);
char* Lowercase(char* str);
char* mystrrev(char* str);

int main() {
    char str1[] = "hello";
    char str2[] = "world";
    int result = mystrcmp(str1, str2);
    if (result == 0) {
        cout << "Strings are equal" << endl;
    } else if (result > 0) {
        cout << "String 1 is greater than String 2" << endl;
    } else {
        cout << "String 1 is less than String 2" << endl;
    }
    
    char numStr[] = "123";
    int num = StringToNumber(numStr);
    cout << "Number: " << num << endl;
    
    int number = 456;
    char* str = NumberToString(number);
    cout << "String: " << str << endl;
    delete[] str;
    
    char lowercase[] = "hello";
    char* uppercase = Uppercase(lowercase);
    cout << "Uppercase: " << uppercase << endl;
    delete[] uppercase;

    char uppercase2[] = "WORLD";
    char* lowercase2 = Lowercase(uppercase2);
    cout << "Lowercase: " << lowercase2 << endl;
    delete[] lowercase2;
    
    char original[] = "reverse";
    char* reversed = mystrrev(original);
    cout << "Reversed: " << reversed << endl;
    delete[] reversed;
    
    return 0;
}