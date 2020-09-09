#include <iostream>
#include <vector>


using std::vector; using std::cin;
using std::cout; using std::endl;


int main()
{
  cout << "Enter numbers: ";
  int num;
  vector<int> numbers;
  
  while(cin >> num) {
      numbers.push_back(num);
  }
  
  //for(decltype(numbers.size()) i = 0; i < numbers.size(); i=i+2) {
   //   cout << numbers[i] + numbers[i+1] << endl;
  //}
  
  for(decltype(numbers.size()) i = 0; i < (numbers.size()) / 2; ++i) {
      cout << numbers[i] + numbers[numbers.size() - (i+1)] << endl;
  }
  
  return 0;
}
