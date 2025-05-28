#include "Spawnable.h"

Spawnable::Spawnable()
{
	isActive = false;
	posX = 0;
	posY = 0;
}

Spawnable::~Spawnable()
{
}

void Spawnable::Spawn(int posX, int posY)
{
	isActive = true;
	this->posX = posX;
	this->posY = posY;
}

void Spawnable::Despawn()
{
	delete this;
}

void Spawnable::SetActive(bool active)
{
	isActive = active;
}

bool Spawnable::IsActive()
{
	return false;
}

void Spawnable::SetPosition(float x, float y)
{
	posX = x;
	posY = y;
}
