#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

bool isPalindrom (const string& str)
{
  string myString = str;
  transform(str.begin(), str.end(), str.begin(), ::tolower()); // convert str to lowercase by iterating through it all
  transform(myString.begin(), myString.end(), myString.begin(), ::tolower()); // convert myString to lowercase
  reverse(myString.begin(), myString.end());
  return str == myString;
}
