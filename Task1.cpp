#include <iostream>

using namespace std;

const int ROWS = 6;
const int COLS = 6;

void printArray(int arr[][COLS], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void deleteRowsWithZeros(int arr[][COLS], const int& rows) {
    int newRows = 0;
    bool hasZeros;
    for (int i = 0; i < rows; i++) {
        hasZeros = false;
        for (int j = 0; j < COLS; j++) {
            if (arr[i][j] == 0) {
                hasZeros = true;
                break;
            }
        }
        if (!hasZeros) {
            if (newRows != i) {
                for (int j = 0; j < COLS; j++) {
                    arr[newRows][j] = arr[i][j];
                }
            }
            newRows++;
        }
    }
}

int main() {
    int arr[ROWS][COLS];
    srand(time(NULL));
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            arr[i][j] = rand() % 10;
        }
    }
    cout << "Original array:" << endl;
    printArray(arr, ROWS);
    deleteRowsWithZeros(arr, ROWS);
    cout << "Array after deleting rows with zeros:" << endl;
    printArray(arr, ROWS);
    return 0;
}
