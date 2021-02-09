#include <iostream>

using namespace std;

int main()
{
    int i = 42;
    int *ip, *&r = ip;
    r = &i;
    cout << *r << endl;
    return 0;
}

