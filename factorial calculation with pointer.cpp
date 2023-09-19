//factorial calculation with pointer
#include <iostream>
using namespace std;

long long calculateFactorial(int n) {
    long long result = 1;
    long long* pResult = &result;

    for (int i = 1; i <= n; i++) {
        *pResult *= i;
    }

    return *pResult;
}

int main() {
    int n;

    cout << "Enter a non-negative integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        long long factorial = calculateFactorial(n);
        cout << "Factorial of " << n << " is: " << factorial << endl;
    }

    return 0;
}
	
