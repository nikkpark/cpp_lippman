#include <iostream>

size_t count_calls() {
    static size_t cnt = 0;
    return cnt++;
}

int main()
{
    for (size_t i = 0; i != 10; ++i) {
        std::cout << count_calls() << std::endl;
    }
    return 0;
}
