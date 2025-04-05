#include <iostream>
#include <math.h>
using namespace std;

int binary(int);

int main() {
    cout << binary(8);
}

int binary(int dec) {
    int binary = 0, bit, i=0;
    while (dec > 0) {
        bit = dec % 2; // OR dec & 1;
        binary += bit * (int)pow(10,i);
        dec /= 2; // OR dec = dec >> 1
        i++;
    }
    return binary;
}