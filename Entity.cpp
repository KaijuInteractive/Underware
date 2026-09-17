#include "Entity.h"

// =================================================
// CONSTRUCTOR
// =================================================

Entity::Entity(
    float x,
    float y,
    float width,
    float height,
    Color color
)
{
    this->x = x;
    this->y = y;

    this->width = width;
    this->height = height;

    this->color = color;

    speed = 4.0f;
}

// =================================================
// UPDATE
// =================================================

void Entity::Update(
    int screenWidth,
    int screenHeight
)
{
    // -------------------------------------------------
    // MOVEMENT
    // -------------------------------------------------

    if (IsKeyDown(KEY_RIGHT))
    {
        x += speed;
    }

    if (IsKeyDown(KEY_LEFT))
    {
        x -= speed;
    }

    if (IsKeyDown(KEY_DOWN))
    {
        y += speed;
    }

    if (IsKeyDown(KEY_UP))
    {
        y -= speed;
    }

    // -------------------------------------------------
    // KEEP ENTITY INSIDE SCREEN
    // -------------------------------------------------

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

// =================================================
// DRAW
// =================================================

void Entity::Draw()
{
    DrawRectangle(
        (int)x,
        (int)y,
        (int)width,
        (int)height,
        color
    );
}