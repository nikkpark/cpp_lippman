#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string s("some string");
    if (s.begin() != s.end()) {
        auto it = s.begin();
        *it = toupper(*it);
    }
    cout << s << endl;
    string p("some string");
    for (auto it2 = p.begin(); it2 != p.end() && !isspace(*it2); ++it2)
        *it2 = toupper(*it2);
    cout << p << endl;
    return 0;
}

