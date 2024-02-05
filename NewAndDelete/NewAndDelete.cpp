#include <iostream>
using namespace std;

void sumArr(int* arrA, int* arrB, int* arrC, int size) {
    for (int i = 0; i < size; i++) {
        arrC[i] = arrA[i] + arrB[i];
    }
}

int main() {
    setlocale(0, "");
    int size = 5; 
    int* C;
    int A[] = { 2, 4, 6, 8, 10 };
    int B[] = { 1, 3, 5, 7, 9 };

    C = new int[size];

    sumArr(A, B, C, size);

    cout << "Массив C, сумма элементов A и B: ";
    for (int i = 0; i < size; i++) {
        cout << C[i] << " ";
    }

    delete []C;
    return 0;
}
