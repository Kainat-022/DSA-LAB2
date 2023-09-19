//sum of array element eith pointer
#include <iostream>

using namespace std;

int main() {
    int integerArray[] = {1, 2, 3, 4, 5};
    int* pointerToStart = integerArray;
    int totalSum = 0;

    for (int index = 0; index < 5; ++index) {
        totalSum += *pointerToStart;
        pointerToStart++;
    }

    cout << "Sum of array elements: " << totalSum << endl;

    return 0;
}
