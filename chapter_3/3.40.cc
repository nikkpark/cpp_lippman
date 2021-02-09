#include <iostream>
#include <cstring>

using namespace std;

int main ()
{
  const char c1[] = {'H','e','l','l','\0'};
  const char c2[] = {'o','\0'};
  char c3[6];
  
  strcpy(c3,c1);
  strcat(c3,c2);
  for (auto &i : c3)
    cout << i;
  cout << endl;
  cout << strlen(c3) << endl;
  return 0;
}
