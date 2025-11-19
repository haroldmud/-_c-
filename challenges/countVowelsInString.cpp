#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int getCount(const string& inputStr){
  int num_vowels = 0;
  string str = inputStr;
  transform(str.begin(), str.end(), str.begin(), ::tolower);
  vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
  

  for(char n: inputStr) {
    // find an item in an existing vector
    auto it = find(vowels.begin(), vowels.end(), n);
    if(it != vowels.end()) {
      num_vowels++;
    }
  }
  cout << "numbers:"<< num_vowels << endl;
  return num_vowels;
}