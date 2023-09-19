// find prime number using pointer
#include <iostream>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; (i * i) <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int pLimit;
    
    cout << "upper lim: ";
    cin >> pLimit;
    
    if (pLimit < 2) {
        cout << "no prime numbers within the range." << endl;
        return 0;
    }
    
    cout << "Prime numbers to " << pLimit << ": ";
    
//usin for loop
    for (int pNum = 2; pNum <= pLimit; ++pNum) {
        if (isPrime(pNum)) {
            cout << pNum << " ";
        }
    }
    
    cout << endl;
    
    return 0;
}
