#include <iostream>
using namespace std;

int main() {
  int* ptr;
  int arr[5] = {1, 2, 3};
  ptr = arr;

// Priting addresses
  for(int i=0; i < 5; i++) {
    cout << "ptr + " << i << " :" << ptr + i << endl;
  }

// Printing values (after dereferencing of course)
  for(int i=0; i < 5; i++) {
    cout << "ptr + " << i << " :" << *(ptr + i) << endl;
  }

  return 0;
}

// ptr + 0 :0x7ff7b2204440
// ptr + 1 :0x7ff7b2204444
// ptr + 2 :0x7ff7b2204448
// ptr + 3 :0x7ff7b220444c
// ptr + 4 :0x7ff7b2204450

// ptr + 0 :1
// ptr + 1 :2
// ptr + 2 :3
// ptr + 3 :0
// ptr + 4 :0
