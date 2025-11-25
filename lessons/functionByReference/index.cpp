#include <iostream>
using namespace std;

void swap(int &a, int &b) {
  int temp;
  temp = b;
  b = a;
  a = temp;
  cout << "a: " << a <<" b: " << b << endl;
}

int main() {
  int x= 10, y =20;
  swap(x, y);
  return 0;
}

