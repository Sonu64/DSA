#include <iostream>
using namespace std;


void digits(int);

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;
    cout << "Digits in N: " << endl;
    digits(n);
    return 0;
}


void digits(int n) {
    int digit;
    while(n>0) {
        digit = n%10;
        cout << digit << endl;
        n /= 10;
    }
}