#ifndef LEVEL_H
#define LEVEL_H

#include <iostream>
#include <fstream>
#include <vector>
#include <utility>

class Level {
private:
    std::vector<std::vector<char>> grid; // Representação do labirinto
    std::pair<int, int> snakeSpawn;      // Localização inicial do snake
    int numRows;                         // Número de linhas do labirinto
    int numCols;                         // Número de colunas do labirinto

public:
    Level();                             // Construtor padrão
    bool loadFromFile(const std::string& filename); // Carregar o labirinto a partir de um arquivo
    void printLevel();                   // Imprimir o labirinto
};

#endif // LEVEL_H
