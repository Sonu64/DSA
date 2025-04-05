#include <iostream>
using namespace std;

int foundVialinearSearch(int[], int, int);

int main() {
  int N = 10, target, position = -1;
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  cout << "Enter element to search: ";
  cin >> target;
  position = foundVialinearSearch(arr, target, N);
  if(position != -1) {
    cout << target << " is found at index " << position;
  }
  else {
    cout << target << " is not found in the array." << endl;
  }
}

int foundVialinearSearch(int arr[], int target, int N) {
  int position = -1;
  for(int i=0; i<N; i++) {
    if(arr[i] == target) {
      position = i;
      break;
    }
  }
  return position;
}