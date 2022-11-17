#include <iostream>
using namespace std;
int main() {
    int i, j=1, n;
    cout << "Enter the value of n: ";
    cin >> n;
    for(i=1; i<=n; i++) {
        while(j<=(n*i)) {
            cout << j << " ";
            j++;            
        }      
       cout << endl;
    }
    
}