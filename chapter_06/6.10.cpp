#include <iostream>

void exchange(int *a, int *b)
{
    int *p = a;
    int *q = b;
    int tmp = *p;
    *p = *q;
    *q = tmp;

}

void replace(int *a, int value)
{
    int *p = a;
    *p = value;

}

int main()
{
    int a, b;
    std::cin >> a >> b;
    std::cout << "a = " << a << "\t" << "b = " << b << std::endl;
    exchange(&a,&b);
    std::cout << "a = " << a << "\t" << "b = " << b << std::endl;
    int c[] = {0,12,14,17,-2,9};
    int num;
    int position;
    std::cin >> num >> position;
    for (auto i : c)
        std::cout << i << " ";
    std::cout << std::endl;

    replace(c+position, num);

    for (auto i : c)
        std::cout << i << " ";
    std::cout << std::endl;


    return 0;
}
