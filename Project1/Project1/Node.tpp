#ifndef NODE_TPP
#define NODE_TPP

#include "Node.h"

template<typename T>
Node<T>::Node(T data)
{
	this->data = data;
	this->next = nullptr;
	this->previous = nullptr;
}

template<typename T>
Node<T>::~Node()
{
	if (this->next)
		delete this->next;
}
template<typename T>
void Node<T>::SetData(T data)
{
	this->data = data;
}
//
//template<typename T>
//void Node<T>::SetData(T data)
//{
//	this->data = data;
//}

template<typename T>
void Node<T>::SetNext(Node* next)
{
		this->next = next;
}

template<typename T>
void Node<T>::SetPrevious(Node* previous)
{
	this->previous = previous;
}

template<typename T>
T Node<T>::GetData()
{
	return data;
}

template<typename T>
Node<T>* Node<T>::GetNext()
{
	return next;
}

template<typename T>
Node<T>* Node<T>::GetPrevious()
{
	return previous;
}

#endif // !NODE_TPP