#include <iostream>
void swap(int &a, int &b)
{
    int t;
    t = a;
    a = b;
    b = t;
    std::cout << "a = " << a  <<"\nb = " << b <<'\n';
}
int main ()
{

    int a = 1, b = 2;
    swap (a, b);
    std::cout << "a = " << a  <<"\nb = " << b <<'\n';
    return 0;
}
