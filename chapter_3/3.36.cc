#include <iostream>
#include <vector>

using namespace std;

int main () 
{
  int ai1[] = {1,2,3,4,5};
  int ai2[] = {1,2,3,4,5};
  
  for (int i = 0; i != 5; ++i) {
    if (ai1[i] != ai2[i]) {
      cout << "Given arrays are not equal." << endl;
      break;
    }
    else if (i == 4) {
      cout << "Given arrays are equal." << endl;
    }
  }
  
  vector<int> vi1 = {1,2,3,4,5};
  vector<int> vi2 = {1,2,5,4,5};
  
  if (vi1 == vi2) {
    cout << "Given vectors are equal." << endl;
  }
  else {
    cout << "Given vectors are not equal." << endl;
  }
  
  return 0;
}
