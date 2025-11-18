#include <iostream>
using namespace std;

int main() {
  string name = "Harold";

  // cout << name << " 's memory address is " << &name;

  // Assigning a value to a pointer
  // string* point_name = &name;

  // prints the address
  // cout << point_name << endl;

  // Dereferences by giving the value based on the address
  // cout << *point_name << endl;

  string* point_name= &name;

  *point_name = "Arnold";

  cout << *point_name << endl;
  return 0;
}
