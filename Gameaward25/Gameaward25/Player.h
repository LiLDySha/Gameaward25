#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>



#pragma once
class Player {
public:
    Player(const std::string& name) : name(name), score(0) {}

    bool makeGuess(const std::string& guess) {
        return guess == currentGuess;
    }

    void setCurrentGuess(const std::string& guess) {
        currentGuess = guess;
    }

private:
    std::string name;
    int score;
    std::string currentGuess;
};

