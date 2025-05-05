#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

#pragma once
class WordList {
public:
    WordList() {
        words[0] = "apple";
        words[1] = "banana";
        words[2] = "pen";
        words[3] = "orange";
        words[4] = "qiwi";
    }

    std::string getRandomWord() {
        return words[rand() % 5];
    }

private:
    std::string words[5];
};