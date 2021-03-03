#include <iostream>

int absolute(int i) {
    return i > 0 ? i : -i;
}
int main()
{
    int num;
    while (std::cin >> num) {
        std::cout << "|" << num << "| = " << absolute(num) << std::endl;
    }
    return 0;
}
