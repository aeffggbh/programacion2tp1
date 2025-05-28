#pragma once
#include "Spawnable.h"
#include "Entity.h"
#include "Derived.h"

/*
El spawner debe ser una clase generada a partir de un template, donde el mismo
trabaja con cualquier clase que cumpla la condici�n de heredar de Entity y Spawnable a la
vez. Internamente, tiene que funcionar como un pool de objetos que se crean al
principio, y que se activan o desactivan bajo demanda. Adem�s, la clase debe recibir la
cantidad de elementos m�xima del pool como parte del template. El contenedor que usa
de fondo tiene que ser un arreglo de tama�o fijo.
*/
template<Derived<Entity> T, int N>
class Spawner
{
private:

	T spawnedEntities[N];

public:

	Spawner();
	void SpawnAll(bool screenWidth, bool screenHeight);
	void DespawnAll();
	void ActivateAll(bool active);

	inline T* GetSpawnedEntities();
	inline int Length();
};

#include "Spawner.tpp"