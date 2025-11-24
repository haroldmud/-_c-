#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

string is_sorted_and_how(const vector<int>& numbers) {
  const int* point_number = numbers;
  cout << point_number << endl;
  return "noda";
}

int main() {
  is_sorted_and_how({1, 1, 2, 3, 4, 5, 5});
  return 0;
}
