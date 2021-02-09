#include <iostream>
#include <vector>
#include <string>

using std::vector; using std::cin;
using std::cout; using std::endl;
using std::string;

int main()
{
  cout << "Enter a line: ";
  string word;
  vector<string> text;
  
  while(cin >> word) {
      text.push_back(word);
  }
  
  for (auto &word : text) {
      for (auto &letter : word) {
          if (!ispunct(letter)) {
              letter = toupper(letter);
          }
          else {
              letter = '\0';
          }
          
      }
  }
  cout << endl;
  
  for(decltype(text.size()) i = 0; i != text.size(); ++i) {
      cout << i % 7 << endl;
      if(i % 7 == 0) {
          cout << endl;
      }
      else {
          cout << text[i] << " ";
      }
  }
  cout << endl;
   return 0;
}
