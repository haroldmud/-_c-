#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

bool isPalindrom (const string& str)
{
  string myString = str;
  transform(str.begin(), str.end(), str.begin(), ::tolower());
  transform(myString.begin(), myString.end(), myString.begin(), ::tolower());
  reverse(myString.begin(), myString.end());
  return str == myString;
}
