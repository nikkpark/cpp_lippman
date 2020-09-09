#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item initial_item, next_item;
    if (std::cin >> initial_item) {
        int cnt = 1;
        while (std::cin >> next_item) {
            if (initial_item.isbn() == next_item.isbn()) {
                ++cnt;
            }
            else {
                std::cout << "ISBN " << initial_item.isbn()
                    << " occurs " << cnt << " times."
                    << std::endl;
                cnt = 1;
                initial_item = next_item;
            }

        }
        std::cout << "ISBN " << initial_item.isbn()
            << " occurs " << cnt << " times." << std::endl;
    }
    return 0;
}
    
