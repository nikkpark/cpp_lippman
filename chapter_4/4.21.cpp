#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec(100, 0);
    for (decltype(ivec.size()) i = 0; i != ivec.size(); ++i) {
        ivec[i] = i;
    }
    
    for (auto &i : ivec)
        i = (i % 2 == 0) ? i : i * 2;
    
    for (auto i : ivec)
        cout << i << endl;

    return 0;
}

