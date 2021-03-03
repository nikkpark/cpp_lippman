#include <iostream>

using namespace std;

int main() 
{
    string i = "lol";
    cout << sizeof(char) << endl;
    cout << sizeof(short) << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(long) << endl;
    cout << sizeof(long long) << endl;
    cout << sizeof(float) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(long double) << endl;
    cout << sizeof(size_t) << endl;
    cout << sizeof(decltype(i.size())) << endl;
    cout << sizeof(unsigned) << endl;
//    cout << sizeof(long long double) << endl;
   
    return 0;
}
