# 🩲 Underware Engine

**What's underneath your game.**

Underware is an experimental C++ game engine/framework built with raylib by Kaiju Interactive.

The project is an ongoing exploration of game-engine architecture, reusable entities, game loops, input handling, rendering, and the systems that sit underneath a game.

> **Current version: v0.0.2**
>
> Underware is an early-stage learning project and is actively being developed.

## 🎮 Current Features

- Engine-managed application lifecycle
- Initialization, update, rendering, and shutdown stages
- Reusable `Entity` class
- Multiple independent entity instances
- Configurable entity position, size, and color
- Keyboard-controlled entity movement
- Screen-boundary enforcement
- 60 FPS target
- Window configuration through the `Engine` constructor

## 🏗️ Architecture

The current project is divided into a small set of components:

### Engine

`Engine` manages the main application lifecycle:

- Window initialization
- Main game loop
- Updating entities
- Rendering
- Shutdown

### Entity

`Entity` currently encapsulates:

- Position
- Size
- Movement speed
- Color
- Keyboard movement
- Screen-boundary checking
- Rendering

### Application

`main.cpp` creates and configures an `Engine` instance and starts the engine with `Run()`.

## 🛠️ Built With

- **C++**
- **raylib**
- **Visual Studio**

## 🚧 Project Status

**Early Development / Experimental**

Underware is not intended to be a production-ready engine.

It is a learning project I'm using to explore how game-engine systems can be designed, separated, and made reusable rather than building every game entirely inside a single game loop.

## 🗺️ Roadmap

Some systems I plan to explore as Underware develops include:

- Improved entity management
- Decoupled input handling
- Entity-specific behaviors
- Collision detection
- Texture and sprite support
- Scene/state management
- Audio
- Animation
- Additional reusable game systems

The architecture will evolve as I learn more and build projects with it.

## 🧠 What I'm Learning

Underware is primarily an architecture project.

Instead of focusing on building a particular game, I'm using it to practice separating responsibilities between systems, designing reusable classes, managing object lifecycles, and gradually moving functionality out of game-specific code and into reusable infrastructure.

## 👾 About

Developed by **Kaiju Interactive**.

I make weird games, experimental software, and occasionally things involving entirely too much underwear.
