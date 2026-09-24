#pragma once
#include "raylib.h"
#include "Player.h"
#include "Map.h"
class Game
{
private:
    int screenWidth;
    int screenHeight;
    Player player;
    Map map;
public:
    Game(int width, int height);

    void Init();
    void Update();
    void Draw();
    void Run();
};
