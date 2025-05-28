#ifndef SPAWNER_TPP
#define SPAWNER_TPP

#include "Spawner.h"
#include <iostream>
#include <ctime>

template<Derived<Entity> T, int N>
Spawner<T, N>::Spawner() : spawnedEntities{ T() }
{
}

template<Derived<Entity> T, int N>
void Spawner<T, N>::SpawnAll(bool screenWidth, bool screenHeight)
{
	for (int i = 0; i < N; i++)
	{
		int randomX = (rand() % (screenWidth - 1)) + 1;
		int randomY = (rand() % (screenHeight - 1)) + 1;

		spawnedEntities[i].Spawn(randomX, randomY);
	}
}

template<Derived<Entity> T, int N>
void Spawner<T, N>::DespawnAll()
{
	for (int i = 0; i < N; i++)
		spawnedEntities[i].Despawn();
}


template<Derived<Entity> T, int N>
void Spawner<T, N>::ActivateAll(bool active)
{
	for (int i = 0; i < N; i++)
		if (spawnedEntities[i].IsActive() != active)
			spawnedEntities[i].SetActive(active);
}

template<Derived<Entity> T, int N>
T* Spawner<T, N>::GetSpawnedEntities()
{
	return &spawnedEntities[0];
}

template<Derived<Entity> T, int N>
int Spawner<T, N>::Length()
{
	return N;
}

#endif