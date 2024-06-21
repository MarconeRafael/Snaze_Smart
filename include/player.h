#ifndef PLAYER_H
#define PLAYER_H

#include <queue>
#include <vector>
#include <utility>
#include "snake.h"
#include "level.h"

class Player {
private:
    std::pair<int, int> foodPosition;
    std::vector<std::vector<char>> grid;
    std::queue<Direction> directions;

    bool isValid(int row, int col, int numRows, int numCols, const std::vector<std::vector<char>>& grid, const std::vector<std::vector<bool>>& visited);
    Direction convertToDirection(const std::pair<int, int>& from, const std::pair<int, int>& to);

public:
    Player(const std::pair<int, int>& foodPos, const std::vector<std::vector<char>>& gameGrid);

    bool findSolution(const Snake& snake);
    Direction nextMove(const Snake& snake);
};

struct Cell {
    int row, col, dist;
    Cell(int r, int c, int d) : row(r), col(c), dist(d) {}
    bool operator>(const Cell& other) const {
        return dist > other.dist;
    }
};

#endif // PLAYER_H
