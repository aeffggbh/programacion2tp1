#pragma once
#include "List.h"

template <typename T>
class Stack
{
private:
	List<T> list;

public:
	Stack();
	~Stack<T>();
	void Clear();
	void Push(T data);
	T Pop();
	Node<T>* GetFirst();
	int GetCount();
	bool IsEmpty();
};

#include "Stack.tpp"