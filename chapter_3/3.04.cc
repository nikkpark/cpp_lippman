#include <iostream>
#include <string>

using std::cin; using std::cout;
using std::endl; using std::string;

int main()
{
    cout << "Line 1: ";
    string line1;
    getline(cin, line1);
    cout << endl << "Line 2: ";
    string line2;
    getline(cin, line2);
    cout << endl;

    if( line1 == line2)
        cout << "Lines are equal." << endl;
    else {
        if(line1 > line2)
            cout << "Line 1 is bigger." << endl;
        else
            cout << "Line 2 is bigger." << endl;
    }

    if(line1.size() == line2.size())
        cout << "Lines are equally long." <<endl;
    else {
        if(line1.size() > line2.size())
            cout << "Line 1 is longer." << endl;
        else
            cout << "Line 2 is longer." << endl;
    }
    return 0;
}
