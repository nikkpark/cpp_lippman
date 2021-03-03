#include <iostream>

int main()
{
    char ch;
    unsigned aCnt = 0, eCnt = 0, oCnt = 0, iCnt = 0, uCnt = 0, 
             sCnt = 0, tCnt = 0, nCnt = 0, conCnt = 0;

    while(std::cin >> std::noskipws >> ch) {
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
            case ' ':
                ++sCnt;
                break;
            case '\t':
                ++tCnt;
                break;
            case '\n':
                ++nCnt;
                break;
            default:
                ++conCnt;
                break;
        }
    }
    std::cout << "a: " << aCnt << std::endl;
    std::cout << "e: " << eCnt << std::endl;
    std::cout << "o: " << oCnt << std::endl;
    std::cout << "i: " << iCnt << std::endl;
    std::cout << "space: " << sCnt << std::endl;
    std::cout << "tab: " << tCnt << std::endl;
    std::cout << "nline: " << nCnt << std::endl;
    std::cout << "consonants: " << conCnt << std::endl;
    return 0;
}
