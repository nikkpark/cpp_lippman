#include <iostream>
#include <climits>
#include <bitset>

using namespace std;

int main()
{
//    short a = 32767;
//    a += 1;
//    cout << a << endl;
//    cout << -21/5 << "\n" << 21/-5 << "\n" << 21 % -5 << "\n" << -21 % 5 << endl;
//    int arr[] = {0,1,2,3};
//    int *p = arr;
//    int *q = arr;
//    cout << *p++ << endl;
//    cout << *p << endl;
//    cout << *++q << endl;
//    cout << *q << endl;
//    unsigned long quiz = 0;
//    quiz |= 1UL << 27;
//    bool status = quiz & (1UL << 27);
//    cout << status << endl;
//    quiz &= ~(1UL << 27);
//    status = quiz & (1UL << 26);
//    cout << status << endl;
//    status = quiz & (1UL << 27);
//    cout << status << endl;
    unsigned char lol = 0b00000000;
    bool status = 0;

    lol |= 0b00000101 << 4;

    cout << (int)lol << endl;
    bitset<8> x(lol);
    cout << x << endl;

    lol |= 0b00000101 << 0;

    cout << (int)lol << endl;
    bitset<8> y(lol);
    cout << y << endl;

//    cout << status;
//    status  = lol & (0b1 << 6);
//    cout << status;
//    status = lol & (0b1 << 7);
//    cout << status;
//    cout << endl;
//    cout << sizeof status;
//    cout << endl;
//    cout << CHAR_BIT;
//    cout << endl;
    return 0;
}
