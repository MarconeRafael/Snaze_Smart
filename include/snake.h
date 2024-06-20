#ifndef SNAKE_H
#define SNAKE_H

#include <deque>
#include <utility>
#include <vector>
enum class Direction { UP, DOWN, LEFT, RIGHT };

class Snake {
private:
    std::deque<std::pair<int, int>> body; // Corpo da cobra representado como deque de pares (linha, coluna)
    Direction currentDirection;           // Direção atual da cobra

public:
    Snake(const std::pair<int, int>& startPos); // Construtor que recebe a posição inicial do snake
    void move(Direction dir);                    // Método para mover a cobra em uma direção
    bool checkCollision(int numRows, int numCols, const std::vector<std::vector<char>>& grid); // Verificar colisão
    void grow();                                 // Método para aumentar o tamanho da cobra
    std::pair<int, int> headPosition();          // Obter a posição da cabeça da cobra
    std::pair<int, int> tailPosition();          // Obter a posição da cauda da cobra
    std::deque<std::pair<int, int>>& getBody();  // Obter uma referência para o corpo da cobra
};

#endif // SNAKE_H
