#pragma once
#include "List.h"

template <typename T>
class Queue
{
private:
	List<T> list;

public:
	Queue();
	~Queue();
	void Clear();
	void Enqueue(T data);
	T Dequeue();
	int GetCount();
	Node<T>* GetFirst();
	Node<T>* at(int pos);
};

#include "Queue.tpp"

