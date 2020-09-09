#include <iostream>

int main() 
{
    int currVal = 0, val = 0, cnt = 1;
    if (std::cin >> currVal) {
        while(std::cin >> val) {
            if (currVal == val) {
                ++cnt;
            }
            else {
                std::cout << currVal << " occurs "
                    << cnt << " times." << std::endl;
                cnt = 1;
                currVal = val;
            }
        }
        std::cout << currVal << " occurs "
            << cnt << " times." << std::endl;
    }
    return 0;
}
