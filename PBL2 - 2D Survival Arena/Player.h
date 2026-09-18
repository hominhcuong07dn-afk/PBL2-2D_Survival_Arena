#pragma once
#include "raylib.h"
#include "raymath.h"
class Player {
private:
	Vector2 position;
	float speed;
	int hp;
	int maxHp;
	float size;
public:
    Player(Vector2 startPosition);

    void Update();
    void Draw() const;
    int GetHP() const;
    int GetMaxHP() const;
    Vector2 GetPosition() const;
};