#include <string>
#include <algorithm>
using namespace std;

bool isAnagram(string test, string original){
  // convert strings in lowercase
  transform(test.begin(), test.end(), test.begin(), ::tolower);
  transform(original.begin(), original.end(), original.begin(), ::tolower);

  // check if they have the same length first
  if(test.length() != original.length()){
    return false;
  }

  // create an exception counter(if there are chars that they don't have in common)
  int except = 0;
  for(char n: test) {
    // comparing character by character to see if some from test string("n") can be found in the original string
    auto it = find(original.begin(), original.end(), n);
    if(it == original.end()){ // if a char was not found in original, we count it as an exception
      except++;
    }
  }
  cout << original << " "<< test << " "<< except << " ";
  return (except == 0) ? true : false;
}
