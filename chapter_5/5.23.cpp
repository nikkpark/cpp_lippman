#include <iostream>

int main()
{
    int a, b;
    if (std::cin >> a >> b) {
        if (b == 0) {
            std::cout << "Divider is zero. Aborted." << std::endl;
            return -1;
        }
        std::cout << a / b << std::endl;
    }
    return 0;
}

