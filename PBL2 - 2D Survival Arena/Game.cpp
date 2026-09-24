#include "Game.h"

Game::Game(int width, int height)
    :screenWidth(width),
    screenHeight(height),
    player(Vector2{ width / 2.0f,height / 2.0f }),
    map(width, height, 64)
{
}

void Game::Init()
{
    InitWindow(screenWidth, screenHeight, "Survival Arena");
    SetTargetFPS(60);
}
void Game::Update()
{
    player.Update();
}
void Game::Draw()
{
    BeginDrawing();

    map.Draw();

    player.Draw();

    DrawText("SURVIVAL ARENA", 20, 20, 30, WHITE);

    DrawText(
        TextFormat("HP: %d/%d", player.GetHP(), player.GetMaxHP()),
        20,
        60,
        25,
        WHITE
    );

    EndDrawing();
}

void Game::Run()
{
    Init();

    while (!WindowShouldClose())
    {
        Update();
        Draw();
    }

    CloseWindow();
}