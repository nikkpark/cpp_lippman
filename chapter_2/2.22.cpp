#include <iostream>
using namespace std;

int main() 
{
    int i = 0;
    int *p = &i;
    if (p)
        cout << "(p) is TRUE" << endl;
    else
        cout << "(p) is FALSE" << endl;

    if (*p)
        cout << "(*p) is TRUE" << endl;
    else
        cout << "(*p) is FALSE" << endl;
    return 0;
}
