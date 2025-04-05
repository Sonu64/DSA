#include <iostream>
#include <math.h>
using namespace std;


int createNum(int);

int main() {
    int numOfDigits, number;
    cout << "Enter Number of digits: ";
    cin >> numOfDigits;
    number = createNum(numOfDigits);
    cout << "Your number is " << number << endl;
    return 0;
}


int createNum(int numOfDigits) {
    int number = 0, digit = 0;
    cout << "Enter " << numOfDigits << " digits one by one: " << endl;
    for(int i=numOfDigits; i>0; i--) {
        cin >> digit;
        if (i == 1)
            number += digit; // ex: For 3 digits it is d3*10^2 + d2*10^1 + d1*10^0
        else 
            number += digit * (int)pow(10, (i-1));
        cout << endl;
        cout << digit << ", " << number << endl;
    }
    return number;
}