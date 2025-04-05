#include <iostream>
#include <limits.h>
using namespace std;

int main() {

  int arr[10] = {10, 78, 90, 45, 32, 22, 100, -2, -45, 55};
  int min = INT_MAX;
  int max = INT_MIN;
  for(int i=0; i<10; i++) {
    if (arr[i] < min) {
      min = arr[i];
    }
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  cout << "Minimum element is " << min << endl;
  cout << "Maximum element is " << max << endl;

  return 0;
}