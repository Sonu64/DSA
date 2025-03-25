#include <iostream>
using namespace std;

double fToC(double);

int main() {
    double f;
    cout << "Enter Fahrenheit temperature: ";
    cin >> f;
    cout << "It's Celsius Equivalent = " << fToC(f) << endl;
}

double fToC(double f) {
    return ((5.0/9.0)*(f-32.0));
}