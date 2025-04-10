//
// Created by sonu on 4/10/25.
//
#include <iostream>
using namespace std;
void swap(int &a, int &b) {
  /**
  ** a and b are reference variables referring to original variable of whatever
  they are assigned to. They are like nicknames of the same variable, they don't
  exist individually. They can't be assigned to constants like int &k = 90,
  coz they can only be alias of some other var, not constants.

  ** They are also not Pointers, mind it !
*/
  int temp = a;
  a = b;
  b = temp;
}

int main(){
  int num1 = 20, num2 = 30;
  cout << "Before Swapping: num1 = " << num1 << " num2 = " << num2 << endl;
  swap(num1, num2);
  cout << "After Swapping: num1 = " << num1 << " num2 = " << num2 << endl;
  return 0;
}
