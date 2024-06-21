#ifndef SNAKE_H
#define SNAKE_H

#include <vector>
#include <deque> // Adicionar inclusão para std::deque
#include <utility>

enum class Direction {
    UP,
    DOWN,
    LEFT,
    RIGHT
};

class Snake {
private:
    std::deque<std::pair<int, int>> body; // Mudar de std::vector para std::deque
    Direction currentDirection;

public:
    Snake(const std::pair<int, int>& startPos);

    std::pair<int, int> headPosition() const;
    Direction getCurrentDirection() const;

    void move(Direction dir);
    bool checkCollision(int numRows, int numCols, const std::vector<std::vector<char>>& grid);
    void grow();

    std::pair<int, int> headPosition();
    std::pair<int, int> tailPosition();
    std::deque<std::pair<int, int>>& getBody(); // Corrigir declaração do método

};

#endif // SNAKE_H
