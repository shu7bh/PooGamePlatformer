#pragma once
#include "Entity.h"
class Obstacle :
    public Entity
{
public:
    Obstacle(int x, int y);

    void update() override;
    void draw(Graphics& gfx) const override;
    void keepInFrame() override;
    bool hitSide = false;
};

