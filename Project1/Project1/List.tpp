#ifndef LIST_TPP
#define LIST_TPP

#include "List.h"

template <typename T>
List<T>::List()
{
	first = nullptr;
	last = nullptr;
	count = 0;
}

template <typename T>
List<T>::~List()
{
	Clear();
}

template <typename T>
Node<T>* List<T>::GetUltimate()
{
	return last;
}

template <typename T>
Node<T>* List<T>::GetPenultimate()
{
	return last->GetPrevious();
}

template <typename T>
void List<T>::PushFront(T data)
{
	Node<T>* nodeToPush = new Node<T>(data);

	if (first)
	{
		nodeToPush->SetNext(first);
		first->SetPrevious(nodeToPush);
		if (!last)
			last = first;
	}
	/*else
		last = nodeToPush;*/


	first = nodeToPush;

	if (last)
		if (!last->GetPrevious())
		{
			last->SetPrevious(first);
			first->SetNext(last);
		}

	count++;
}

template <typename T>
void List<T>::PushBack(T data)
{
	Node<T>* nodeToPush = new Node<T>(data);
	Node<T>* lastNode = last;


	if (last)
	{
		lastNode->SetNext(nodeToPush);

		nodeToPush->SetPrevious(lastNode);

		if (!lastNode->GetPrevious())
			first = lastNode;

		nodeToPush->SetNext(nullptr);
	}
	/*else if (!first)
		first = nodeToPush;*/

	last = nodeToPush;

	if (first)
		if (!first->GetNext())
		{
			first->SetNext(last);
			last->SetPrevious(first);
		}

	count++;

}

template <typename T>
T List<T>::PopFront()
{
	T data;

	if (first)
	{
		Node* nodeToPop = first;

		if (nodeToPop->GetNext())
		{
			first = nodeToPop->GetNext();
			nodeToPop->SetNext(nullptr);

		}
		else
			first = nullptr;

		//if for some reason there was something previous to this node
		nodeToPop->SetPrevious(nullptr);

		data = nodeToPop->GetData();

		delete nodeToPop;

		count--;
	}

	return data;
}

template <typename T>
T List<T>::PopBack()
{
	T data;

	if (last)
	{
		Node* nodeToPop = last;

		if (nodeToPop->GetPrevious())
		{
			last = nodeToPop->GetPrevious();
			nodeToPop->SetPrevious(nullptr);

		}
		else
		{
			last = nullptr;
		}

		//if for some reason there was something after this node
		nodeToPop->SetNext(nullptr);

		data = nodeToPop->GetData();

		delete nodeToPop;

		count--;
	}

	return data;
}

template <typename T>
Node<T>* List<T>::at(int pos)
{
	Node<T>* current = first;

	if (pos > 0)
		for (int i = 0; i < pos; i++)
			if (current->GetNext() != nullptr)
				current = current->GetNext();

	return current;
}

template <typename T>
void List<T>::insert(T data, int pos)
{
	if (pos == 0)
	{
		PushFront(data);
	}
	else
	{
		Node<T>* nodeToOverwrite = at(pos);

		if (nodeToOverwrite)
		{
			Node<T>* insertedNode = new Node<T>(data);
			if (nodeToOverwrite->GetPrevious())
			{
				Node<T>* previousNodeToOverwrite = nodeToOverwrite->GetPrevious();

				previousNodeToOverwrite->SetNext(insertedNode);
				nodeToOverwrite->SetPrevious(insertedNode);

				insertedNode->SetPrevious(previousNodeToOverwrite);
				insertedNode->SetNext(nodeToOverwrite);
			}
			else
			{
				nodeToOverwrite->SetPrevious(insertedNode);

				insertedNode->SetNext(nodeToOverwrite);
			}

			if (!nodeToOverwrite->GetNext())
				last = nodeToOverwrite;

			count++;
		}
	}

}

template <typename T>
void List<T>::Clear()
{
	delete first;
}

template <typename T>
int List<T>::GetCount()
{
	return count;
}

template <typename T>
Node<T>* List<T>::GetFirst()
{
	return first;
}

#endif // !List.tpp