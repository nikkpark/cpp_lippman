#include <iostream>
#include <cstddef>

using namespace std;

int main()
{
    int ia[2][3] = {{0, 1, 2},
                    {3, 4, 5}};

    // serial for
    for (int (&i)[3] : ia)
        for (int (&j) : i) {
            cout << j  << " ";
        }
    cout << endl;

    //regualar for
    for (size_t i = 0; i != 2; ++i) {
        for (size_t j = 0; j != 3; ++j) {
            cout << ia[i][j] << " ";
        }
    }
    cout << endl;

    //pointer for
    for (int (*p)[3] = ia; p != ia + 2; ++p) {
        for (int *q = *p; q != *p + 3; ++q) {
            cout << *q << " ";
        }
    }
    cout << endl;

    return 0;
}
