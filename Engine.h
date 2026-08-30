#pragma once

#include "raylib.h"
#include <string>
#include "Entity.h"

class Engine
{
public:
    Engine(int width, int height, const std::string& title);

    void Run();

private:
    int screenWidth;
    int screenHeight;
    std::string windowTitle;

    Entity player{ 375.0f, 200.0f, 50.0f, 50.0f };

    void Initialize();
    void Update();
    void Draw();
    void Shutdown();

    bool IsKeyPressedEngine(int key);
};
