#include <iostream>
using namespace std;

long int factorial(int);

int main() {
    int n;
    cout << "Enter number to find factorial: ";
    cin >> n;
    cout << n << "! = " << factorial(n) << endl;
    return 0;
}

long int factorial(int n) {
    int i = 2;
    long int f = 1;
    for(i=2; i<=n; i++) {
        f = f * i;
    }
    return f;
}