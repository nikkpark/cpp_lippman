#include <iostream>

int main () 
{
    int val1 = 42, *p1 = &val1;
    int val2 = 100;
    std::cout << "val1 = " << val1 << '\n'
        << "*p1 = " << *p1 << '\n'
        << "p1 = " << p1 << '\n'
        << "val2 = " << val2 << '\n' << '\n';
    p1 = &val2;
    std::cout << "*p1 = " << *p1 << '\n'
        << "p1 = " << p1 << '\n' << '\n';
    *p1 = 64;
    std:: cout << "val2 = " << val2 << '\n'
        << "*p1 = " << *p1 << '\n'
        << "p1 = " << p1 << '\n';
    return 0;
}
