#include <iostream>
#include <vector>
#include <cstddef>
using namespace std;

int main() 
{
//    int ia0[10] = {0,1,2,3,4,5,6,7,8,9};
//    int ia1[10];
//    for (size_t i = 0; i != 10; ++i)
//        ia1[i] = ia0[i];
//    
//    for (auto i : ia1) cout << i << " ";
//    cout << endl;
    vector<int> iv0{0,1,2,3,4,5,6,7,8,9};
    vector<int> iv1;
    for (decltype(iv0.size()) i = 0; i != iv0.size(); ++i)
        iv1.push_back(iv0[i]);

    for (auto i : iv1) cout << i << " ";
    cout << endl;

    return 0;
}
