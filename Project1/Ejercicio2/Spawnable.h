#pragma once

/*
El spawnable debe ser una clase base abstracta que obligue la implementación del
seteo de una posición, así como de la condición de “activo” o “inactivo”, de un objeto de
una clase que herede de ella.
*/
class Spawnable
{
protected:
	bool isActive;
	int posX;
	int posY;
public:
	Spawnable();
	virtual ~Spawnable();
	void Spawn(int posX, int posY);
	void Despawn();
	virtual void SetActive(bool active);
	virtual bool IsActive();
	virtual void SetPosition(float x, float y);
};

