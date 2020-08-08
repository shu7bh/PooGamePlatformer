#include "Entity.h"

Entity::Entity(int x, int y, int width, int height, int v)
	: x(x), y(y), width(width), height(height), v(v) {}

bool Entity::checkCollision(const Entity& one, const Entity& second, const int width)
{
	return one.x <= second.x + second.width + width &&
		one.x + one.width + width >= second.x &&
		one.y <= second.y + second.height &&
		one.y + one.width >= second.y;
}