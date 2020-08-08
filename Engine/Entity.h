#pragma once
#include "Graphics.h"

class Entity
{
protected:
	int x, y;
	int width, height;
	int v;

public:

	Entity(int x, int y, int width, int height, int v = 0);

	virtual void update() = 0;
	virtual void draw(Graphics&) const = 0;
	virtual void keepInFrame() = 0;
	static bool checkCollision(const Entity& one, const Entity& second, const int width = 0);

	const int getX() const { return x; }
	const int getY() const { return y; }
};