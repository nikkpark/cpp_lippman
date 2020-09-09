#include <iostream>
#include <vector>

using std::cin; using std::cout;
using std::endl; using std::vector;

int main() 
{
    cout << "Enter numbers: ";
    int num;
    vector <int> numbers;
    while(cin >> num)
        numbers.push_back(num);
    cout << endl;
    for(int i = 0; i < numbers.size(); ++i)
        cout << numbers[i] << endl;
    return 0;

}
