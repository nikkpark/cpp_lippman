#include <iostream>
#include <cstddef>

using namespace std;

int main()
{
    int ia[2][3] = {{0, 1, 2},
                    {3, 4, 5}};

    typedef int int_array[3];
    // serial for
    for (int_array &i : ia)
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
    for (int_array *p = ia; p != ia + 2; ++p) {
        for (int *q = *p; q != *p + 3; ++q) {
            cout << *q << " ";
        }
    }
    cout << endl;

    return 0;
}
