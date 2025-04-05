#include <iostream>
#include <math.h>
using namespace std;

int decimal(int);

int main() {
    cout << decimal(111);
}

int decimal(int bin) {
    int decimal = 0, digit, i=0;
    while (bin > 0) {
        digit = bin % 10; 
        decimal += digit * (int)pow(2,i);
        bin /= 10; 
        i++;
    }
    return decimal;
}