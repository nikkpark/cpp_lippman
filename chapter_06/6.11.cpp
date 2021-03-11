#include <iostream>

void reset(int &a)
{
    a = 0;
}

int main()
{
    int i = 100;
    std::cout << i << std::endl;
    reset(i);
    std::cout << i << std::endl;
    return 0;
}
