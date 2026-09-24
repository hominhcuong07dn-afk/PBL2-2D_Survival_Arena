#include "Map.h"

Map::Map(int w, int h, int tile)
{
    width = w;
    height = h;
    tileSize = tile;
}

void Map::Draw()
{
    ClearBackground(DARKGREEN);

    for (int x = 0;x < width;x += tileSize)
    {
        DrawLine(x, 0, x, height, DARKGRAY);
    }

    for (int y = 0;y < height;y += tileSize)
    {
        DrawLine(0, y, width, y, DARKGRAY);
    }
}

int Map::GetWidth() const
{
    return width;
}

int Map::GetHeight() const
{
    return height;
}