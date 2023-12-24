#include <iostream>

void insertBlock(int arr[], int size, int index, int block[], int blockSize) {
    for (int i = size - 1; i >= index + blockSize; i--) {
        arr[i] = arr[i - blockSize];
    }

    for (int i = 0; i < blockSize; i++) {
        arr[index + i] = block[i];
    }
}

void appendBlock(int arr[], int size, int block[], int blockSize) {
    for (int i = 0; i < blockSize; i++) {
        arr[size + i] = block[i];
    }
}

int main() {
    const int SIZE = 10;
    int arr[SIZE] = { 1, 2, 3, 4, 5 };
    int block1[] = { 6, 7, 8 };
    int block2[] = { 9, 10 };

    insertBlock(arr, SIZE, 2, block1, 3);

    appendBlock(arr, SIZE + 3, block2, 2);

    for (int i = 0; i < SIZE + 5; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
