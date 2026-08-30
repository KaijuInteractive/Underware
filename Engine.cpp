#include "Engine.h"

Engine::Engine(int width, int height, const std::string& title)
{
    screenWidth = width;
    screenHeight = height;
    windowTitle = title;
}

void Engine::Initialize()
{
    InitWindow(
        screenWidth,
        screenHeight,
        windowTitle.c_str()
    );

    SetTargetFPS(60);
}

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

void Engine::Update()
{
    player.Update(screenWidth, screenHeight);
}

void Engine::Draw()
{
    BeginDrawing();

    ClearBackground(BLACK);

    player.Draw();

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

    EndDrawing();
}

void Engine::Shutdown()
{
    CloseWindow();
}

bool Engine::IsKeyPressedEngine(int key)
{
    return IsKeyPressed(key);
}