#include<iostream>
using namespace std;

int main() {
    int n = 10;
    int a = 0, b = 1, nextNum;

    cout << a << " ";
    cout << b << " ";

    for(int i=0; i<10; i++) {
        nextNum = a+b;
        cout << nextNum << " ";
        a = b;
        b = nextNum;
    }
}