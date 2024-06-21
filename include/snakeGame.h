// snakeGame.h
#ifndef SNAKEGAME_H
#define SNAKEGAME_H

#include "snake.h"
#include "player.h"
#include "level.h"

enum class GameState {
    RUNNING,
    LEVEL_COMPLETE,
    GAME_OVER
};

class SnakeGame {
private:
    Snake snake;
    Player player;
    Level level;
    GameState gameState;

public:
    SnakeGame(const std::string& levelFile);

    void run();

private:
    void processInput();
    void update();
    void render();
    bool checkCollision();
    void handleCollision();
    void handleInput(Direction dir);
    bool isLevelComplete();
    void resetLevel();
};

#endif // SNAKEGAME_H
