#ifndef LEVEL_H
#define LEVEL_H

#include <iostream>
#include <fstream>
#include <vector>
#include <utility>

class Level {
private:
    int numRows;
    int numCols;
    std::vector<std::vector<char>> grid;
    std::pair<int, int> snakeSpawn;

public:
    Level();

    bool loadFromFile(const std::string& filename);
    void printLevel() const;

    std::pair<int, int> getSnakeSpawn() const;
    const std::vector<std::vector<char>>& getGrid() const;
};

#endif // LEVEL_H
