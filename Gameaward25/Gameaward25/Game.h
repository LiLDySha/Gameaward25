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
        std::cout << "�������� �����! � ��� 5 �������." << std::endl;
    }

    void makeGuess(const std::string& guess) {
        attempts++;
        if (guess == wordToGuess) {
            std::cout << "�����������! �� ������� �����!" << std::endl;
            gameOver = true;
        }
        else {
            std::cout << "�����������! �������� �������: " << (5 - attempts) << std::endl;
            if (attempts >= 5) {
                std::cout << "���� ��������! ���������� ����� ����: " << wordToGuess << std::endl;
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

