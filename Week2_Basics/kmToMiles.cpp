#include <iostream>
using namespace std;

double toMiles(double);

int main() {
    double km;
    cout << "Enter km: ";
    cin >> km;
    cout << toMiles(km) << " miles" << endl;
}

double toMiles(double km) {
    return (0.621371 * km);
}