#include <iostream>

long double fact (int i) {
    long double ret = 1;
    while (i > 1) {
        ret *= i--;
    }
    return ret;
}

int main()
{
    int num;
    while (std::cin >> num) {
        std::cout << num << "! = " << fact(num) << std::endl;
    }
    return 0;
}

