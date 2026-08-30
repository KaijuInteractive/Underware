#include "Entity.h"

Entity::Entity(float x, float y, float width, float height)
{
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;

    speed = 4.0f;
}

void Entity::Update(int screenWidth, int screenHeight)
{
    if (IsKeyDown(KEY_RIGHT))
        x += speed;

    if (IsKeyDown(KEY_LEFT))
        x -= speed;

    if (IsKeyDown(KEY_DOWN))
        y += speed;

    if (IsKeyDown(KEY_UP))
        y -= speed;

    if (x < 0)
    {
        x = 0;
    }

    if (y < 0)
    {
        y = 0;
    }

    if (x + width > screenWidth)
    {
        x = screenWidth - width;
    }

    if (y + height > screenHeight)
    {
        y = screenHeight - height;
    }
}

void Entity::Draw()
{
    DrawRectangle(
        (int)x,
        (int)y,
        (int)width,
        (int)height,
        RED
    );
}