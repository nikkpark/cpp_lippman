#include <iostream>
#include <string>
#include <vector>
#include <cstring>
using namespace std;

int arr0[10];
int main() 
{
    //string s("some string");
    //if (s.begin() != s.end()) {
        //auto it = s.begin();
        //*it = toupper(*it);
    //}
    //cout << s << endl;
    //string p("some string");
    //for (auto it2 = p.begin(); it2 != p.end() && !isspace(*it2); ++it2)
        //*it2 = toupper(*it2);
    //cout << p << endl;
    //unsigned scores[11] = {};
    //unsigned grade;
    //while (cin >> grade) {
      //if (grade <= 100)
        //++scores[grade/10];
      //}
    
    //for (auto &i : scores)
      //cout << i << " ";
    //char ca[] = {'c', '\0'};
    //cout << strlen(ca);
//    int arr[10];
//
//    cout << "in main: " << endl;
//    for (auto i:arr)
//        cout << i << " ";
//    cout << endl;
//
//    cout << "outside main: " << endl;
//    for (auto i:arr0)
//        cout << i << " ";
//    cout << endl;
//    int arr[] = {0,1,2,3};
//    int *first = &arr[0];
//    int *second = &arr[1];
//    int *third = &arr[2];
//    int *fourth = &arr[3];
//    int *e = &arr[4];
//    int *beyond = e + 1;
//    int *pend = end(arr);
//
//    cout << "pointer first:" << endl;
//    cout << "value: " << *first << endl;
//    cout << "address: " << first << endl;
//
//    cout << "pointer second:" << endl;
//    cout << "value: " << *second << endl;
//    cout << "address: " << second  << endl;
//
//    cout << "pointer third:" << endl;
//    cout << "value: " << *third << endl;
//    cout << "address: " << third  << endl;
//
//    cout << "pointer fourth:" << endl;
//    cout << "value: " << *fourth << endl;
//    cout << "address: " << fourth  << endl;
//
//    cout << "pointer e:" << endl;
//    cout << "value: " << *e << endl;
//    cout << "address: " << e << endl;
//
//    cout << "pointer pend:" << endl;
//    cout << "value: " << *pend << endl;
//    cout << "address: " << pend << endl;
//
//    cout << "pointer beyond:" << endl;
//    cout << "value: " << *beyond << endl;
//    cout << "address: " << beyond << endl;

//    char ca[] = {'C', '+', '+', '\0'};
//    cout << strlen(ca) << endl;
//    int arr[] = {0,1,2,3};
//    vector<int> ivec{begin(arr), end(arr)};
//    for (auto i : ivec) cout << i << " ";
//    cout << endl;
    int arr[3][3];
    size_t cnt = 0;

    for (auto &i : arr) {
        for (auto j : i) {
            j = cnt;
            ++cnt;
        }
    }

    return 0;
}

