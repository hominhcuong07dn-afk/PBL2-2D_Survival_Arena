#pragma once
#include "raylib.h"
#include "Player.h"
class Game
{
private:
    int screenWidth;
    int screenHeight;

    Player player;
public:
    Game(int width, int height);

    void Init();
    void Update();
    void Draw();
    void Run();
};
