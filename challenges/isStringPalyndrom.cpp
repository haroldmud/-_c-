#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

bool isPalindrom (const string& str)
{
  string original = str;
  string reversed = str;
  // convert the existing strings to lowercase
  transform(original.begin(), original.end(), original.begin(), ::tolower);
  transform(reversed.begin(), reversed.end(), reversed.begin(), ::tolower);

  // reverse the reversed variable's value
  reverse(reversed.begin(), reversed.end());
  return original == reversed; 
}
