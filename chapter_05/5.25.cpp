#include <iostream>
#include <stdexcept>

int main()
{
    int a, b;
    try {
        if (std::cin >> a >> b && b == 0) {
            throw std::runtime_error("Division by zero.");
        }
        else {
            std::cout << a / b << std::endl;
        }
    }
    catch (std::runtime_error err) {
        std::cout << err.what() << "\nAborted." << std::endl;
    }
    return 0;
}

