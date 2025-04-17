#ifndef STACK_TPP
#define STACK_TPP

#include "Stack.h"

template <typename T>
Stack<T>::~Stack<T>()
{
	Clear();
}

template<typename T>
Stack<T>::Stack()
{
}

template <typename T>
void Stack<T>::Clear()
{
	list.Clear();
}

template <typename T>
void Stack<T>::Push(T data)
{
	list.PushFront(data);
}

template <typename T>
T Stack<T>::Pop()
{
	return list.PopFront();
}

template <typename T>
Node<T>* Stack<T>::GetFirst()
{
	return list.GetFirst();
}

template <typename T>
int Stack<T>::GetCount()
{
	return list.GetCount();
}

template <typename T>
bool Stack<T>::IsEmpty()
{
	return list.GetCount() == 0;
}

#endif // !STACK.TPP