//calculate the area of circle
#include <iostream>
#include <cmath>

using namespace std;

double calculateCircleArea(double radius) {
    return M_PI * pow(radius, 2);
}

int main() {
    double radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double area = calculateCircleArea(radius);

    cout << "area of circle with radius " << radius << " is: " << area << endl;

    return 0;
}
