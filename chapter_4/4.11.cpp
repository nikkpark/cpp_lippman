#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if (d < c && c < b && b < a)
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}
