#include <iostream>

using namespace std;

int main () 

{
  int ai[] = {1,1,1,1,1,1};
  for (auto &i : ai)
    cout << i;
  cout << endl;  
  for (int *p = begin(ai); p != end(ai); ++p)
    *p = 0;
  for (auto &i : ai)
    cout << i;
  cout << endl;
  return 0;
}
