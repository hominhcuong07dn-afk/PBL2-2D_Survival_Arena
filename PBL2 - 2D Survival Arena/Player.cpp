#include "Player.h"

Player::Player(Vector2 startPosition)
{
    position = startPosition;

    speed = 250.0f;

    maxHp = 20;
    hp = maxHp;

    size = 40.0f;
}

void Player::Update()
{
    Vector2 direction = { 0.0f, 0.0f };

    if (IsKeyDown(KEY_W))
    {
        direction.y -= 1.0f;
    }

    if (IsKeyDown(KEY_S))
    {
        direction.y += 1.0f;
    }

    if (IsKeyDown(KEY_A))
    {
        direction.x -= 1.0f;
    }

    if (IsKeyDown(KEY_D))
    {
        direction.x += 1.0f;
    }

    if (Vector2Length(direction) > 0.0f) //Ngan di cheo nhanh hon di thang
    {
        direction = Vector2Normalize(direction);
    }

    float deltaTime = GetFrameTime();

    position.x += direction.x * speed * deltaTime;
    position.y += direction.y * speed * deltaTime;


    float halfSize = size / 2.0f;

    if (position.x < halfSize) 
    {
        position.x = halfSize;
    }
    
    if (position.x > GetScreenWidth() - halfSize)
    {
        position.x = GetScreenWidth() - halfSize;
    }
    //position.x + halfSize = ScreenWidth
    if (position.y < halfSize)
    {
        position.y = halfSize;
    }

    if (position.y > GetScreenHeight() - halfSize)
    {
        position.y = GetScreenHeight() - halfSize;
    }
}

void Player::Draw() const
{   //DrawRectangle(x,y,width,height,color);
    DrawRectangle(
        static_cast<int>(position.x - size / 2.0f), //ep kieu float thanh int
        static_cast<int>(position.y - size / 2.0f),
        static_cast<int>(size),
        static_cast<int>(size),
        BLUE
    );
}

int Player::GetHP() const
{
    return hp;
}

int Player::GetMaxHP() const
{
    return maxHp;
}

Vector2 Player::GetPosition() const
{
    return position;
}