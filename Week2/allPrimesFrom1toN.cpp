#include <iostream>
using namespace std;

bool isPrime(int);
void allPrimes(int);

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;
    cout << "List of all Prime numbers from 1 to N: " << endl;
    allPrimes(n);
    return 0;
}

bool isPrime(int n) {
    for(int i=2; i<n; i++) {
        if (n%2 == 0) {
            return false;
        }
    }
    return true;
}

void allPrimes(int n) {
    int i=2;
    while(i<n) {
        if (isPrime(i))
            cout << i << endl;
        i++;
    }
}