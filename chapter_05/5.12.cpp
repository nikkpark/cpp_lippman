#include <iostream>

int main()
{
    char ch;
    bool fflag = false;
    unsigned ffCnt = 0, flCnt = 0, fiCnt = 0;

    while(std::cin >> std::noskipws >> ch) {
        switch (tolower(ch)) {
            case 'f':
                (fflag) ? ++ffCnt : fflag = true;
                break;
            case 'l':
                (fflag) ? ++flCnt : fflag = false;
                break;
            case 'i':
                (fflag) ? ++fiCnt : fflag = false;
                break;
        }
    }
    std::cout << "ff: " << ffCnt << std::endl;
    std::cout << "fl: " << flCnt << std::endl;
    std::cout << "fi: " << fiCnt << std::endl;

    return 0;
}
