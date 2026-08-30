#pragma once

#include "raylib.h"

class Entity
{
public:
    Entity(float x, float y, float width, float height);

    void Update(int screenWidth, int screenHeight);
    void Draw();

private:
    float x;
    float y;

    float width;
    float height;

    float speed;
};