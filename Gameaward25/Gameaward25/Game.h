#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

#include "WordList.h"

#pragma once
class Game {
public:
    Game() : attempts(0) {
        srand(static_cast<unsigned int>(time(0)));
        wordToGuess = wordList.getRandomWord();
    }

    void startGame() {
        std::cout << "Угадайте слово! У вас 5 попыток." << std::endl;
    }

    void makeGuess(const std::string& guess) {
        attempts++;
        if (guess == wordToGuess) {
            std::cout << "Поздравляем! Вы угадали слово!" << std::endl;
            gameOver = true;
        }
        else {
            std::cout << "Неправильно! Осталось попыток: " << (5 - attempts) << std::endl;
            if (attempts >= 5) {
                std::cout << "Игра окончена! Загаданное слово было: " << wordToGuess << std::endl;
                gameOver = true;
            }
        }
    }

    bool isGameOver() const {
        return gameOver;
    }

private:
    WordList wordList;
    std::string wordToGuess;
    int attempts;
    bool gameOver = false;
};

