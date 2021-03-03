#include <iostream>
#include <string>

using namespace std;

int main() 
{
    int grade;
    string finalgrade;
    while(cin >> grade) {
        finalgrade = (grade > 90) ? "high pass"
                                  : (grade >= 60 && grade <= 75) ? "pass"
                                  : (grade < 60) ? "fail" : "barely pass";
    }
    cout << finalgrade << endl;

    return 0;
}

