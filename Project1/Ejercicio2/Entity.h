#pragma once
/*
La entidad debe ser una clase base abstracta que obligue la implementaci�n de un
m�todo draw para cada clase que herede de ella.
*/
class Entity
{
	virtual void Draw() = 0;
};

