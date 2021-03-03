#include <iostream>

using namespace std;

int main () 
{
    int i = 42, *p = &i;
    int j = 69;
    cout << "i = " << i << " " << endl;
    cout << "j = " << j << " " << endl;
    cout << "p = " << p << " " << endl;
    cout << "*p = " << *p << " " << endl;

    cout << "Change..." << endl;

    p = &j;
    
    cout << "p = " << p << " " << endl;
    cout << "*p = " << *p << " " << endl;

    cout << "Now change the g value..." << endl;
    *p = 100500;
    cout << "j = " << j << " " << endl;

}
