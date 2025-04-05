#include <iostream>
using namespace std;

bool isEven(int);

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isEven(num))
        cout << num << " is Even." << endl;
    else    
        cout << num << " is Odd." << endl;
    return 0;
}

bool isEven(int num) {
    if((num & 1) == 0)
        return true;
    else    
        return false;
}