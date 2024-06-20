//representa a cobra e seus atributos. A simulação do jogo deve ter apenas uma cobra

#include "snake.h"

Snake::Snake(const std::pair<int, int>& startPos) : currentDirection(Direction::UP) {
    body.push_front(startPos);
}

void Snake::move(Direction dir) {
    // Atualizar a direção da cobra
    currentDirection = dir;

    // Determinar a nova posição da cabeça da cobra
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
    // Verificar colisão com as paredes
    std::pair<int, int> head = body.front();
    if (head.first < 0 || head.first >= numRows || head.second < 0 || head.second >= numCols) {
        return true; // Colidiu com uma parede
    }

    // Verificar colisão com o próprio corpo
    for (size_t i = 1; i < body.size(); ++i) {
        if (head == body[i]) {
            return true; // Colidiu com o próprio corpo
        }
    }

    // Verificar colisão com as paredes do labirinto
    if (grid[head.first][head.second] == '#') {
        return true; // Colidiu com uma parede do labirinto
    }

    return false; // Sem colisão
}

void Snake::grow() {
    // Não remover a cauda para crescer
    // A função move() adicionará uma nova cabeça, aumentando o tamanho do corpo
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
