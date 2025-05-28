#pragma once
#include "Entity.h"
#include "Spawnable.h"

/*
El personaje debe ser una clase derivada concreta que herede de la entidad y del
spawnable en simultáneo. Para dibujarse, debe generar un monigote del color
correspondiente en la posición en la que se encuentre el objeto.
*/
class Character : public Entity, public Spawnable
{
private:
	int height;
	int width;

public:
	void Draw() override;
};

