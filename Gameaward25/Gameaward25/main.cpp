#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

#include "Game.h"

int main() {
    setlocale(LC_ALL, "RU");
    Game game;
    game.startGame();

    while (!game.isGameOver()) {
        std::string guess;
        std::cout << "Введите ваше предположение: ";
        std::cin >> guess;
        game.makeGuess(guess);
    }

    return 0;
}