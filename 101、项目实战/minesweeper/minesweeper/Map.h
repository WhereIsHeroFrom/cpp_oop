#pragma once
#include <SFML/Graphics.hpp>
#include "Grid.h"
using namespace sf;

class Map {
private:
    void initGame();
public:
    void init(RenderWindow* win, Sprite* sprite);
    void handleMouseEvent(Event& e, int x, int y);
    void draw(int x, int y);
private:
    Grid grid[MAP_COL + 1][MAP_ROW + 1];
    RenderWindow* pwin;
    Sprite* psprite;
    bool    isRunning;
};