#pragma once
#include <iostream>
using namespace std;

template<typename T>
class Node
{
private:
	T data;
	Node* next;
	Node* previous;

public:
	Node(T data);
	~Node();
	void SetData(T data);
	void SetNext(Node* next);
	void SetPrevious(Node* previous);
	T GetData();
	Node* GetNext();
	Node* GetPrevious();
};

#include "Node.tpp"

