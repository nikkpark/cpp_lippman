#include <iostream>
#include <cstddef>

using namespace std;

int main()
{
    int ia[2][3] = {{0, 1, 2},
                    {3, 4, 5}};

    // serial for
    for (auto &i : ia)
        for (auto &j : i) {
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
    for (auto *p = begin(ia); p != end(ia); ++p) {
        for (auto *q = begin(*p); q != end(*p); ++q) {
            cout << *q << " ";
        }
    }
    cout << endl;

    return 0;
}
