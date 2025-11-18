#include <vector>
#include <string>
#include <iostream>
using namespace std;

string smash(const vector<string>& words)
{
  if(words.empty()) return ""; //when the space will be added, the output will be different from the expected one

  string sentence = "";
  vector<string> updated = words;
  string last = words.back();
  updated.pop_back();
  
  for(const string& n: updated) {
    sentence += n + " ";
  }
  cout << sentence + last;

  return sentence + last;
}

int main() {
  smash(vector<string>{"bonjour", "paris"});
  return 0;
}
         