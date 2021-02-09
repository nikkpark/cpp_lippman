#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> text;
    std::string word;
    while (std::cin >> word){
        text.push_back(word);
    }

    std::string iterWord, streakWord;
    int cnt = 0, streak = 0;

    streakWord = text[0];
    for (auto i : text) {
        iterWord = i;
        if (iterWord == streakWord) {
            ++cnt;
            if (streak <= cnt) {
                streak = cnt;
                streakWord = iterWord;
            }
        }
        else {
            cnt = 1;
            
        }
    }
    std::cout << streakWord <<  " " << streak << std::endl;
//    for (auto i : text)
//        std::cout << i << std::endl;
    return 0;
}
