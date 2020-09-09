#include <iostream>
#include <string>

using std::cin; using std::cout;
using std::endl; using std::string;

int main() 
{
    cout << "Enter a string: ";
    string line;
    getline(cin, line);

    decltype(line.size()) i = 0;
    while(i < line.size()) {
        if(ispunct(line[i])) {
            ++i;
        }
        else {
            cout << line[i];
            ++i;
        }
    }
    cout << endl;

    for(auto &c : line) {
        if(isalnum(c))
            c = 'X';
    }
    cout << line << endl;

    return 0;
}
