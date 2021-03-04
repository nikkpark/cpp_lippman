#include "Chapter6.h"
#include <iostream>

int main()
{
    int num;
    while (std::cin >> num) {
        std::cout << num << "! = " << fact(num) << std::endl;
    }
    return 0;
}
