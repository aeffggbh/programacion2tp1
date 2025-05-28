#pragma once
/*
La entidad debe ser una clase base abstracta que obligue la implementación de un
método draw para cada clase que herede de ella.
*/
class Entity
{
	virtual void Draw() = 0;
};

