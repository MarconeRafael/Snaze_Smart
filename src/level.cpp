//representa um nível do jogo. Possui dimensões e caracteres que representam
//elementos do jogo. A simulação do jogo pode ter um ou mais níveis.

#include "level.h"

Level::Level() : numRows(0), numCols(0) {}

bool Level::loadFromFile(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Erro ao abrir o arquivo " << filename << std::endl;
        return false;
    }

    // Ler o número de linhas e colunas do labirinto
    file >> numRows >> numCols;
    if (numRows <= 0 || numCols <= 0 || numRows > 100 || numCols > 100) {
        std::cerr << "Número inválido de linhas ou colunas." << std::endl;
        return false;
    }

    // Inicializar o grid com o tamanho correto
    grid.resize(numRows, std::vector<char>(numCols, ' '));

    // Ler o restante do arquivo para preencher o labirinto
    char ch;
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            file >> ch;
            grid[i][j] = ch;
            if (ch == '&') {
                snakeSpawn = {i, j}; // Localizar o spawn do snake
            }
        }
    }

    file.close();
    return true;
}

void Level::printLevel() {
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            std::cout << grid[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
