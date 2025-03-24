#include <iostream>
using namespace std;


void createNum(int);

int main() {
    int n;
    cout << "Enter Number of digits: ";
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