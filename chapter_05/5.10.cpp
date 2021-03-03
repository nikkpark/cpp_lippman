#include <iostream>

int main()
{
    char ch;
    unsigned aCnt = 0, eCnt = 0, oCnt = 0, iCnt = 0, uCnt = 0;

    while(std::cin >> ch) {
        switch (tolower(ch)) {
            case 'a':
                ++aCnt;
                break;
            case 'e':
                ++eCnt;
                break;
            case 'o':
                ++oCnt;
                break;
            case 'i':
                ++iCnt;
                break;
            case 'u':
                ++uCnt;
                break;
            default:
                break;
        }
    }
    std::cout << "a: " << aCnt << std::endl;
    std::cout << "e: " << eCnt << std::endl;
    std::cout << "o: " << oCnt << std::endl;
    std::cout << "i: " << iCnt << std::endl;
    std::cout << "u: " << uCnt << std::endl;
    return 0;
}
