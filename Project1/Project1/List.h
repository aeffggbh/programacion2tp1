#pragma once
#include "Node.h"

template <typename T>
class List
{
private:
	Node<T>* first;
	Node<T>* last;
	int count;

public:
	List();
	virtual ~List();
	Node<T>* GetUltimate();
	Node<T>* GetPenultimate();
	void PushFront(T data);
	void PushBack(T data);
	T PopFront();
	T PopBack();

	Node<T>* at(int pos);
	void insert(T data, int pos);

	void Clear();
	int GetCount();
	Node<T>* GetFirst();
};

#include "List.tpp"

