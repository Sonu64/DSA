#include <iostream>
using namespace std;
int main() {
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int target, N=10, position = -1;
  bool found = false;
  cout << "Enter number to search: ";
  cin >> target;
  for(int i=0; i<N; i++) {
    if (arr[i] == target) {
      found = true;
      position = i;
      break;
    }
    found = false;
  }
  if (found) {
    cout << target << " is found at index " << position << endl;
  }
  else {
    cout << target << " is not found." << endl;
  }

  return 0;
}