// player.cpp
#include "player.h"
#include <queue>
#include <vector>
#include <iostream>
#include <climits>
#include <cstdlib>

Player::Player(const std::pair<int, int>& foodPos, const std::vector<std::vector<char>>& gameGrid)
    : foodPosition(foodPos), grid(gameGrid) {}

Direction Player::nextMove(const Snake& snake) {
    if (directions.empty()) {
        if (!findSolution(snake)) {
            std::vector<Direction> possibleMoves;
            std::pair<int, int> head = snake.headPosition();
            int row = head.first;
            int col = head.second;

            if (row % 2 == 0) {
                if (col > 0 && grid[row][col - 1] != '#') {
                    possibleMoves.push_back(Direction::LEFT);
                }
            } else {
                if (col < grid[0].size() - 1 && grid[row][col + 1] != '#') {
                    possibleMoves.push_back(Direction::RIGHT);
                }
            }

            if (col % 2 == 0) {
                if (row < grid.size() - 1 && grid[row + 1][col] != '#') {
                    possibleMoves.push_back(Direction::DOWN);
                }
            } else {
                if (row > 0 && grid[row - 1][col] != '#') {
                    possibleMoves.push_back(Direction::UP);
                }
            }

            if (!possibleMoves.empty()) {
                int randIdx = std::rand() % possibleMoves.size();
                return possibleMoves[randIdx];
            }

            return snake.getCurrentDirection(); // Utiliza o método para obter a direção atual
        }
    }

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

        if (std::make_pair(row, col) == foodPosition) {
            std::pair<int, int> step = foodPosition;
            while (step != head) {
                directions.push(convertToDirection(previous[step.first][step.second], step));
                step = previous[step.first][step.second];
            }
            return true;
        }

        std::vector<std::pair<int, int>> neighbors;
        if (row % 2 == 0) {
            if (col > 0) neighbors.push_back({row, col - 1}); // Left
        } else {
            if (col < numCols - 1) neighbors.push_back({row, col + 1}); // Right
        }

        if (col % 2 == 0) {
            if (row < numRows - 1) neighbors.push_back({row + 1, col}); // Down
        } else {
            if (row > 0) neighbors.push_back({row - 1, col}); // Up
        }

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

    return false;
}

bool Player::isValid(int row, int col, int numRows, int numCols, const std::vector<std::vector<char>>& grid, const std::vector<std::vector<bool>>& visited) {
    return (row >= 0 && row < numRows && col >= 0 && col < numCols && grid[row][col] != '#' && !visited[row][col]);
}

Direction Player::convertToDirection(const std::pair<int, int>& from, const std::pair<int, int>& to) {
    if (from.first == to.first) {
        return (from.second < to.second) ? Direction::RIGHT : Direction::LEFT;
    } else {
        return (from.first < to.first) ? Direction::DOWN : Direction::UP;
    }
}
