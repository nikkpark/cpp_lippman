#include <vector>
#include <iostream>

using namespace std;

int main ()
{
  int ai[] = {0,1,2,3};
  vector<int> vi(begin(ai), end(ai));
  for (auto &i : vi)
    cout << i << " ";
  cout << endl;
  return 0;
}
