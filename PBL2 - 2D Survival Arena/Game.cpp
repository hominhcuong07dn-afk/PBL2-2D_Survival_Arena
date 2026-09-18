#include "Game.h"

Game::Game(int width, int height)
    : screenWidth(width),                           //Player khoi tao chinh giua man hinh
    screenHeight(height),
    player(Vector2{ width / 2.0f, height / 2.0f })
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

    ClearBackground(RAYWHITE);
    player.Draw();
    DrawText("SURVIVAL ARENA",20, 20, 30, BLACK);

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