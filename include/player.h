#ifndef PLAYER_H
#define PLAYER_H

#include "snake.h"
#include <vector>
#include <queue>
#include <utility>

class Player {
private:
    std::queue<Direction> directions; // Fila de direções para a cobra seguir
    std::pair<int, int> foodPosition; // Posição da comida
    std::vector<std::vector<char>> grid; // Labirinto

public:
    Player(const std::pair<int, int>& foodPos, const std::vector<std::vector<char>>& gameGrid);
    Direction nextMove(const Snake& snake); // Determina a próxima direção para a cobra
    bool findSolution(const Snake& snake); // Encontra uma solução para guiar a cobra até a comida
};

#endif // PLAYER_H
