#include <iostream>
#include <vector>

using std::cout; using std::cin;
using std::endl; using std::vector;

int main()
{
    cout << "Enter your numbers: ";
    vector<int> v;
    int num;
    while(cin >> num) {
        v.push_back(num);
    }
    auto beg = v.cbegin(), end = v.cend();
    auto reserve_beg = beg;
    auto mid = beg + (end - beg)/2;
    auto fake_end = end - 1;
    while(beg != end) {
        cout << *beg + (*beg + 1) << " ";
        beg +=1;
    }
    cout << endl;

    while(reserve_beg != mid) {
        cout << *reserve_beg + *fake_end << " ";
        reserve_beg += 1;
        fake_end -= 1;
    }
    cout << endl;
    return 0;
}
