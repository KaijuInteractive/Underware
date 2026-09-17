#include "Engine.h"

// =================================================
// CONSTRUCTOR
// =================================================

Engine::Engine(
    int width,
    int height,
    const std::string& title
)
{
    screenWidth = width;
    screenHeight = height;
    windowTitle = title;
}

// =================================================
// INITIALIZE
// =================================================

void Engine::Initialize()
{
    InitWindow(
        screenWidth,
        screenHeight,
        windowTitle.c_str()
    );

    SetTargetFPS(60);
}

// =================================================
// RUN
// =================================================

void Engine::Run()
{
    Initialize();

    while (!WindowShouldClose())
    {
        Update();
        Draw();
    }

    Shutdown();
}

// =================================================
// UPDATE
// =================================================

void Engine::Update()
{
    // -------------------------------------------------
    // PLAYER
    // -------------------------------------------------

    player.Update(
        screenWidth,
        screenHeight
    );

    // testEntity does not update yet.
    // For now, it exists only to prove that Entity
    // can be reused for multiple independent objects.
}

// =================================================
// DRAW
// =================================================

void Engine::Draw()
{
    BeginDrawing();

    ClearBackground(BLACK);

    // -------------------------------------------------
    // ENTITIES
    // -------------------------------------------------

    player.Draw();
    testEntity.Draw();

    // -------------------------------------------------
    // ENGINE INFO
    // -------------------------------------------------

    DrawText(
        "UNDERWARE ENGINE",
        250,
        180,
        30,
        WHITE
    );

    DrawText(
        "What's underneath your game.",
        265,
        225,
        18,
        GRAY
    );

    DrawText(
        "Engine class: ONLINE",
        300,
        275,
        16,
        GREEN
    );

    // -------------------------------------------------
    // ENTITY TEST
    // -------------------------------------------------

    DrawText(
        "Reusable Entity Test: ONLINE",
        270,
        310,
        16,
        GREEN
    );

    DrawText(
        "Arrow Keys - Move Teal Entity",
        265,
        350,
        16,
        LIGHTGRAY
    );

    EndDrawing();
}

// =================================================
// SHUTDOWN
// =================================================

void Engine::Shutdown()
{
    CloseWindow();
}

// =================================================
// INPUT
// =================================================

bool Engine::IsKeyPressedEngine(int key)
{
    return IsKeyPressed(key);
}