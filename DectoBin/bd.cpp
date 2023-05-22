#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int binary, answer = 0, digit, i=0;
    cout << "Enter Binary Number: ";
    cin >> binary;

    while(binary != 0) {
        digit = binary % 10;
        if(digit == 1)    
            answer = answer + pow(2, i);
        binary = binary/10;
        ++i;
    }

    cout << "Required Decimal is " << answer;

    return 0;
}