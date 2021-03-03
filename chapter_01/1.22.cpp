#include <iostream>
#include "Sales_item.h"

int main() 
{
    Sales_item initial_item, next_item;
    if (std::cin >> initial_item) {
        while (std::cin >> next_item) {
            initial_item += next_item;
        }
        std::cout << initial_item << std::endl;
    }
    else {
        std::cout << "Incorrect input." << std::endl;
    }
    
    return 0;
}

