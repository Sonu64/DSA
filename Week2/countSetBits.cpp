#include <iostream>
using namespace std;

int countSetBits(int);

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Set Bits in " << n << " = " << countSetBits(n);
    return 0;
}

int countSetBits(int n) {
    int setBits = 0;
    while (n > 0) {
        if ((1 & n) == 1)
            setBits++;
        n = n >> 1;
    }
    return setBits;
}