#pragma once

#include "raylib.h"
#include <string>
#include "Entity.h"

class Engine
{
public:

    // -------------------------------------------------
    // CONSTRUCTOR
    // -------------------------------------------------

    Engine(
        int width,
        int height,
        const std::string& title
    );

    // -------------------------------------------------
    // MAIN ENGINE LOOP
    // -------------------------------------------------

    void Run();

private:

    // -------------------------------------------------
    // WINDOW
    // -------------------------------------------------

    int screenWidth;
    int screenHeight;

    std::string windowTitle;

    // -------------------------------------------------
    // ENTITIES
    // -------------------------------------------------

    Entity player
    {
        375.0f,
        200.0f,
        50.0f,
        50.0f,
        Color{ 94, 205, 228, 255 }
    };

    Entity testEntity
    {
        150.0f,
        150.0f,
        75.0f,
        75.0f,
        Color{ 255, 105, 180, 255 }
    };

    // -------------------------------------------------
    // ENGINE FUNCTIONS
    // -------------------------------------------------

    void Initialize();
    void Update();
    void Draw();
    void Shutdown();

    // -------------------------------------------------
    // INPUT
    // -------------------------------------------------

    bool IsKeyPressedEngine(int key);
};
