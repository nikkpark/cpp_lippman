#include <iostream>
#include <string>


int main()
{
    do {
        std::string a, b;
        std::cin >> a >> b;
        if (a > b) {
            std::cout << b << std::endl;
        }
        else {
            std::cout << a <<  std::endl;
        }
    }
    while (std::cin);
    return 0;
}
            
        
