#pragma once
#include "raylib.h"
class Map
{
private:
    int width;
    int height;
    int tileSize;

public:
    Map(int w, int h, int tile);

    void Draw();

    int GetWidth() const;
    int GetHeight() const;
};