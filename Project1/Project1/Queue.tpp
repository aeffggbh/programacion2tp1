#ifndef QUEUE_TPP
#define QUEUE_TPP

#include "Queue.h"

template<typename T>
Queue<T>::Queue()
{
	list = new List<T>();
}

template <typename T>
Queue<T>::~Queue()
{
	Clear();
}

template <typename T>
void Queue<T>::Clear()
{
	delete list;
}

template <typename T>
void Queue<T>::Enqueue(T data)
{
	list->PushBack(data);
}

template <typename T>
T Queue<T>::Dequeue()
{
	return list->PopFront();
}

template <typename T>
int Queue<T>::GetCount()
{
	return list->GetCount();
}

template <typename T>
Node<T>* Queue<T>::GetFirst()
{
	return list->GetFirst();
}

template <typename T>
Node<T>* Queue<T>::at(int pos)
{
	return list->at(pos);
}

#endif // !QUEUE_TPP