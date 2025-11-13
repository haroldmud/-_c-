#include <iostream>
#include <string>
using namespace std;

int main(){
  char text[4] = {'d', 'o', 'v', 'e'};
  string empty = "";
  for(int i = 0; i < (sizeof(text)/sizeof(text[0])); i++)
  {
    empty += text[i];
  }
  cout << empty;
}
