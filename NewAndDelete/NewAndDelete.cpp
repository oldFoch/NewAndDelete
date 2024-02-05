#include <iostream>
using namespace std;

void sumArr(int* arrA, int* arrB, int* arrC, int size) {
    for (int i = 0; i < size; i++) {
        arrC[i] = arrA[i] + arrB[i];
    }
}
