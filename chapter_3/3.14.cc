#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout;
using std::endl; using std::vector;
using std::string;

int main() 
{
//    cout << "Enter numbers: ";
//    int num;
//    vector <int> numbers;
//    while(cin >> num)
//        numbers.push_back(num);
//    cout << endl;
//    for(int i = 0; i < numbers.size(); ++i)
//        cout << numbers[i] << endl;
    cout << "Enter strings: ";
    string line;
    vector <string> text;

    while (getline(cin, line))
            text.push_back(line);
    cout << endl;
    for (decltype(text.size()) i = 0; i < text.size(); ++i)
        cout << text[i] << endl;
    return 0;

}
