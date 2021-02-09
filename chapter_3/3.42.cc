#include <vector>
#include <iostream>
#include <cstddef>
using namespace std;

int main ()
{
  vector<int> ivec = {0,1,2,3};
  int ai[4];
  
  for (size_t i = 0; i != 4; ++i) {
    ai[i] = ivec[i];
  }
  
  for (auto i:ai)
    cout << i;
  cout << endl;

  return 0;
}
