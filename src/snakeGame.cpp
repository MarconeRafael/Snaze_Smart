/*
a entidade principal que instancia todos os outros objetos e gerencia o jogo ex-
ecução. Esta classe deve fornecer métodos, como inicialize_game() , update() ,
process_events() , render() , game_over() , que são chamados no loop do jogo.
Eu recomendo que você organize sua arquitetura de código seguindo o procedimento tradicional do Game Loop.
padrão de gramática.    
*/

#include "snakeGame.h"
#include <iostream>

SnakeGame::SnakeGame(const std::string& levelFile)
    : snake(levelFile), player(level.getFoodPosition(), level.getGrid()), level(levelFile), gameState(GameState::RUNNING) {}

void SnakeGame::run() {
    while (gameState == GameState::RUNNING) {
        processInput();
        update();
        render();
    }

    if (gameState == GameState::LEVEL_COMPLETE) {
        std::cout << "Level Complete!" << std::endl;
    } else if (gameState == GameState::GAME_OVER) {
        std::cout << "Game Over!" << std::endl;
    }
}

void SnakeGame::processInput() {
    // Lógica para processar entrada do jogador, se necessário
    // Por exemplo, captura de teclas para controlar a direção da cobra manualmente
}

void SnakeGame::update() {
    if (!checkCollision()) {
        Direction nextMove = player.nextMove(snake);
        handleInput(nextMove); // Simular movimento da cobra
    }

    if (isLevelComplete()) {
        gameState = GameState::LEVEL_COMPLETE;
    }
}

void SnakeGame::render() {
    // Lógica para renderizar o estado atual do jogo, se necessário
}

bool SnakeGame::checkCollision() {
    // Lógica para verificar colisões da cobra com as bordas do labirinto ou com ela mesma
    // Retorna true se houver colisão, false caso contrário
    return false;
}

void SnakeGame::handleCollision() {
    // Lógica para tratar colisões da cobra com as bordas do labirinto ou com ela mesma
    // Define o estado do jogo para GAME_OVER se a cobra colidir
    gameState = GameState::GAME_OVER;
}

void SnakeGame::handleInput(Direction dir) {
    // Lógica para mover a cobra na direção especificada pelo jogador ou pela IA
    snake.move(dir);

    // Verificar se houve colisão após o movimento
    if (checkCollision()) {
        handleCollision();
    }
}

bool SnakeGame::isLevelComplete() {
    // Lógica para verificar se o nível foi completado (cobra alcançou a comida)
    return false;
}

void SnakeGame::resetLevel() {
    // Lógica para reiniciar o nível
    // Isso pode incluir resetar a posição da cobra, da comida e redefinir o estado do jogo
}
