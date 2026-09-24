#pragma once
#include "raylib.h"
#include "raymath.h"
#include "EnemyType.h"

class Enemy
{
private:
    Vector2 position;
    float speed;
    float size;

    int hp;
    int maxHp;
    int damage;

    EnemyType type;
    bool isAlive;

public:
    Enemy(Vector2 startPosition, EnemyType enemyType);

    void Update(Vector2 playerPosition);
    void Draw() const;

    int GetHP() const;
    int GetDamage() const;
    Vector2 GetPosition() const;
    bool IsAlive() const;
};