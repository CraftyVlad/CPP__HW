//#include <iostream>
//
//using namespace std;
//
//void printArray(int** arr, int rows, int cols) {
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            cout << arr[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//void addArrays(int** arr1, int** arr2, int** result, int rows, int cols) {
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            result[i][j] = arr1[i][j] + arr2[i][j];
//        }
//    }
//}
//
//int main() {
//    int rows, cols;
//    cout << "Enter number of rows: ";
//    cin >> rows;
//    cout << "Enter number of columns: ";
//    cin >> cols;
//    int** arr1 = new int* [rows];
//    int** arr2 = new int* [rows];
//    int** result = new int* [rows];
//    for (int i = 0; i < rows; i++) {
//        arr1[i] = new int[cols];
//        arr2[i] = new int[cols];
//        result[i] = new int[cols];
//        for (int j = 0; j < cols; j++) {
//            arr1[i][j] = rand() % 10;
//            arr2[i][j] = rand() % 10;
//        }
//    }
//    cout << "Array 1:" << endl;
//    printArray(arr1, rows, cols);
//    cout << "Array 2:" << endl;
//    printArray(arr2, rows, cols);
//    addArrays(arr1, arr2, result, rows, cols);
//    cout << "Result array:" << endl;
//    printArray(result, rows, cols);
//    for (int i = 0; i < rows; i++) {
//        delete[] arr1[i];
//        delete[] arr2[i];
//        delete[] result[i];
//    }
//    delete[] arr1;
//    delete[] arr2;
//    delete[] result;
//    return 0;
//}
