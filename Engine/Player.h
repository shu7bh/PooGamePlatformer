#pragma once
#include "Entity.h"

class Player :
    public Entity
{
public:
    Player(int x, int y);

    void update() override;
    void goUp();
    void goDown();
    void draw(Graphics& gfx) const override;
    void keepInFrame() override;
    int lowerY() const { return y + height; }

    bool inhibitDown = false;
};

