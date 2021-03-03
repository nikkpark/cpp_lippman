#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main ()
{
  string s1 = "String";
  string s2 = "String";
  if (s1 == s2)
    cout << "Strings are equal." << endl;
  else
    cout << "Strings are not equal." << endl;
    
  const char c1[] = {'s','t','r','i','n','g','\0'};
  const char c2[] = {'s','t','r','i','n','k','\0'};
  if (strcmp(c1, c2) == 0)
    cout << "Char strings are equal." << endl;
  else
    cout << "Char strings are not equal." << endl;
  
  return 0;
}
