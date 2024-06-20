#include "player.h"
#include <iostream>
#include <queue>
#include <climits>

Player::Player(const std::pair<int, int>& foodPos, const std::vector<std::vector<char>>& gameGrid)
    : foodPosition(foodPos), grid(gameGrid) {}

Direction Player::nextMove(const Snake& snake) {
    if (directions.empty()) {
        if (!findSolution(snake)) {
            // Se não houver solução, mova-se aleatoriamente
            std::vector<Direction> possibleMoves;
            std::pair<int, int> head = snake.headPosition();
            int row = head.first;
            int col = head.second;

            // Verificar movimentos permitidos de acordo com as regras
            bool canMoveLeft = (row % 2 == 0 && col > 0 && grid[row][col - 1] != '#');
            bool canMoveRight = (row % 2 == 1 && col < grid[0].size() - 1 && grid[row][col + 1] != '#');
            bool canMoveUp = (col % 2 == 1 && row > 0 && grid[row - 1][col] != '#');
            bool canMoveDown = (col % 2 == 0 && row < grid.size() - 1 && grid[row + 1][col] != '#');

            // Adicionar movimentos possíveis à lista
            if (canMoveLeft) {
                possibleMoves.push_back(Direction::LEFT);
            }
            if (canMoveRight) {
                possibleMoves.push_back(Direction::RIGHT);
            }
            if (canMoveUp) {
                possibleMoves.push_back(Direction::UP);
            }
            if (canMoveDown) {
                possibleMoves.push_back(Direction::DOWN);
            }

            // Escolher aleatoriamente se há mais de uma opção
            if (!possibleMoves.empty()) {
                int randIdx = std::rand() % possibleMoves.size();
                return possibleMoves[randIdx];
            }

            // Caso contrário, continuar na direção atual
            return snake.getCurrentDirection();
        }
    }

    // Retirar a direção da fila de direções e retornar
    Direction nextDir = directions.front();
    directions.pop();
    return nextDir;
}

bool Player::findSolution(const Snake& snake) {
    std::pair<int, int> head = snake.headPosition();
    int numRows = grid.size();
    int numCols = grid[0].size();

    std::priority_queue<Cell, std::vector<Cell>, std::greater<Cell>> pq;
    std::vector<std::vector<int>> distances(numRows, std::vector<int>(numCols, INT_MAX));
    std::vector<std::vector<bool>> visited(numRows, std::vector<bool>(numCols, false));
    std::vector<std::vector<std::pair<int, int>>> previous(numRows, std::vector<std::pair<int, int>>(numCols, {-1, -1}));

    pq.push(Cell(head.first, head.second, 0));
    distances[head.first][head.second] = 0;

    while (!pq.empty()) {
        Cell curr = pq.top();
        pq.pop();
        int row = curr.row;
        int col = curr.col;

        if (visited[row][col]) continue;
        visited[row][col] = true;

        // Verificar se alcançamos a comida
        if (std::make_pair(row, col) == foodPosition) {
            // Reconstruir o caminho
            std::pair<int, int> step = foodPosition;
            while (step != head) {
                directions.push(convertToDirection(previous[step.first][step.second], step));
                step = previous[step.first][step.second];
            }
            return true;
        }

        // Vizinhos possíveis
        std::vector<std::pair<int, int>> neighbors = {
            {row - 1, col}, // Up
            {row + 1, col}, // Down
            {row, col - 1}, // Left
            {row, col + 1}  // Right
        };

        for (auto neighbor : neighbors) {
            int newRow = neighbor.first;
            int newCol = neighbor.second;

            if (isValid(newRow, newCol, numRows, numCols, grid, visited)) {
                int newDist = curr.dist + 1;
                if (newDist < distances[newRow][newCol]) {
                    distances[newRow][newCol] = newDist;
                    previous[newRow][newCol] = {row, col};
                    pq.push(Cell(newRow, newCol, newDist));
                }
            }
        }
    }

    // Se chegarmos aqui, não há caminho para a comida
    return false;
}

bool Player::isValid(int row, int col, int numRows, int numCols, const std::vector<std::vector<char>>& grid, const std::vector<std::vector<bool>>& visited) {
    return (row >= 0 && row < numRows && col >= 0 && col < numCols && grid[row][col] != '#' && !visited[row][col]);
}

Direction Player::convertToDirection(const std::pair<int, int>& from, const std::pair<int, int>& to) {
    if (from.first == to.first + 1) {
        return Direction::DOWN;
    } else if (from.first == to.first - 1) {
        return Direction::UP;
    } else if (from.second == to.second + 1) {
        return Direction::RIGHT;
    } else if (from.second == to.second - 1) {
        return Direction::LEFT;
    }
    // Retornar uma direção padrão em caso de erro ou situação não esperada
    return Direction::UP; // Aqui pode ser qualquer direção padrão
}
