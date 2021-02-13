#include <iostream>
#include <string>

int main()
{
    std::string a, b;
    bool first = true;
    while (std::cin >> a) {
        if (a != b && first) {
            first = false;
            b = a;
        }
        
        else if (a != b && !first) {
            std::cout << "No luck. Go again." << std::endl;
            b = a;
        }
        else{
            std::cout << "Sought. " << a << std::endl;
            break;
        }
    }
    return 0;
}


