#include "snake.h"

Snake::Snake(const std::pair<int, int>& startPos) : currentDirection(Direction::UP) {
    body.push_front(startPos);
}

std::pair<int, int> Snake::headPosition() const {
    return body.front();
}

Direction Snake::getCurrentDirection() const {
    return currentDirection;
}

void Snake::move(Direction dir) {
    currentDirection = dir;
    std::pair<int, int> head = body.front();
    switch (dir) {
        case Direction::UP:
            body.push_front({head.first - 1, head.second});
            break;
        case Direction::DOWN:
            body.push_front({head.first + 1, head.second});
            break;
        case Direction::LEFT:
            body.push_front({head.first, head.second - 1});
            break;
        case Direction::RIGHT:
            body.push_front({head.first, head.second + 1});
            break;
    }
}

bool Snake::checkCollision(int numRows, int numCols, const std::vector<std::vector<char>>& grid) {
    std::pair<int, int> head = body.front();
    if (head.first < 0 || head.first >= numRows || head.second < 0 || head.second >= numCols) {
        return true; // Colidiu com uma parede
    }

    for (std::size_t i = 1; i < body.size(); ++i) {
        if (head == body[i]) {
            return true; // Colidiu com o próprio corpo
        }
    }

    if (grid[head.first][head.second] == '#') {
        return true; // Colidiu com uma parede do labirinto
    }

    return false;
}

void Snake::grow() {
    // A função grow não remove a cauda, pois a função move() adicionará uma nova cabeça automaticamente
}

std::pair<int, int> Snake::headPosition() {
    return body.front();
}

std::pair<int, int> Snake::tailPosition() {
    return body.back();
}

std::deque<std::pair<int, int>>& Snake::getBody() {
    return body;
}
