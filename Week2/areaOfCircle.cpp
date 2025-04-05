#include <iostream>
#include <math.h>
using namespace std;

double areaOfCircle(float);

int main() {
    float radius;
    double area = 0.0;

    cout << "Enter Radius of Circle: ";
    cin >> radius;

    cout << "Area of Circle is " << areaOfCircle(radius) << " sq. units." << endl;

    return 0;
}

double areaOfCircle(float radius) {
    return ((22.0/7.0) * pow(radius, 2));
}