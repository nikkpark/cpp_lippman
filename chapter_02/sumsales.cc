#include <iostream>
#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
struct Sales_data {
    std::string bookNumber;
    unsigned int booksSold;
    double revenue;
};
#endif

int main()
{
    Sales_data data1, data2;
    double price = 0;
    std::cin >> data1.bookNumber >> data1.booksSold >> price;
    data1.revenue = data1.booksSold * price;
    std::cin >> data2.bookNumber >> data2.booksSold >> price;
    data2.revenue = data2.booksSold * price;

    if (data1.bookNumber == data2.bookNumber) {
        unsigned totalCnt = data1.booksSold +data2.booksSold;
        double totalRevenue = data1.revenue + data2.revenue;
        std::cout << data1.bookNumber << " " << totalCnt
                  << " " << totalRevenue << " ";
        if (totalCnt != 0)
            std::cout << totalRevenue / totalCnt << '\n';
        else
            std::cout << "(no sales)" << '\n';
        return 0;
    }
    else {
        std::cerr << "Data must refer to the same ISBN"
                  <<  std::endl;
        return -1;
    }
}
    
