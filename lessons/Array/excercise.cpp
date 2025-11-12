#include <iostream>
using namespace std;

//Print Array in reverse
void reverser() {
  char mybabezname[5] = {'z', 'a', 'i', 'n', 'a'};
  for(int i=(sizeof(mybabezname)/sizeof(mybabezname[0]))-1; i >= 0; i--)
    cout << mybabezname[i] << "";
}

// count the zeros in an array
void counter() {
  int arr[5]= {12,23};
  int count = 0;
  for(int i=0; i< (sizeof(arr)/sizeof(arr[0])); i++){
    if(arr[i] == 0) {
      count++;
    };
  }
  cout << "The numbers of couple of zeroes is "<< count;
}

int main() {
  reverser();
  // counter();
  return 0;
};
