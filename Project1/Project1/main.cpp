//EJERCICIO 1
//Tomando de base las implementaciones de la lista, cola y pila creadas en Gestión de
//Memoria, hacer que los contenedores funcionen de forma genérica añadiendo class
//templates; es decir, que permitan almacenar cualquier tipo de dato en sus nodos.Hacer
//la separación en archivos .h y.tpp.
//Una vez implementadas las clases en templates, generar un programa que haga lo
//siguiente…
//● Genere una pila de n números float pseudoaleatorios, donde n también sea un
//número pseudoaleatorio comprendido entre 5 y 10.
//● Genere una cola de n números float pseudoaleatorios, donde n también sea un
//número pseudoaleatorio comprendido entre 5 y 10.
//● Genere una lista de n números float, donde n sea la suma entre la cantidad de
//elementos de la pila y la cantidad de elementos de la cola previamente creadas.
//Los números que contenga la lista deben ser los mismos que tenían los
//contenedores anteriores, pero se deben ingresar usando un método insert, de
//forma tal que queden ordenados de mayor a menor al terminar de agregarse.
//Nota: los números float deben ser todos de dos decimales después de la coma(ej : 120, 45).

#include "Stack.h"
#include "Queue.h"
#include <ctime>

float GetRandomFloat(int& min, int& max);
int GetRandomInt(int& min, int& max);
template <typename T>
void Fill(List<T>& list, Queue<T>& queue, Stack<T>& stack);
template<typename T>
void InsertValue(List<T>& list, T numberToInsert, int& count);
template <typename T>
void Print(List<T>& list);
template <typename T>
void Fill(Stack<T>& stack, int& count, int& maxNum, int& minNum);
template <typename T>
void Fill(Queue<T>& queue, int& count, int& maxNum, int& minNum);

int main()
{
	srand(time(0));
	Stack<float> floatStack = Stack<float>();
	Queue<float> floatQueue = Queue<float>();
	List<float> floatList = List<float>();

	int min = 5;
	int max = 10;

	int count;

	cout << "Insert the stack size" << endl;
	cin >> count;

	Fill(floatStack, count, max, min);

	cout << "Insert the queue size" << endl;
	cin >> count;

	Fill(floatQueue, count, max, min);

	Fill(floatList, floatQueue, floatStack);

	Print(floatList);
}

float GetRandomFloat(int& min, int& max)
{
	return min + static_cast<float>(std::rand() % (min * 100) + 1) / 100.0f;
}

int GetRandomInt(int& min, int& max)
{
	return min + rand() % (max - min + 1);
}

template <typename T>
void Fill(List<T>& list, Queue<T>& queue, Stack<T>& stack)
{
	const int listsAmount = 2;

	int count = queue.GetCount() + stack.GetCount();

	for (int i = 0; i < listsAmount; i++)
	{
		if (i == 0)
			for (int j = 0; j < queue.GetCount(); j++)
				InsertValue(list, queue.at(j)->GetData(), count);
		else
			for (int j = 0; j < stack.GetCount(); j++)
				InsertValue(list, stack.at(j)->GetData(), count);
	}
}

template<typename T>
void InsertValue(List<T>& list, T numberToInsert, int& count)
{
	for (int j = 0; j < count; j++)
	{
		if (list.GetCount() > 0)
		{
			if (j < list.GetCount())
			{
				if (list.at(j)->GetData() > numberToInsert)
				{
					list.insert(numberToInsert, j);
					break;
				}
			}
			else
			{
				list.PushBack(numberToInsert);
				break;
			}

		}
		else
		{
			list.insert(numberToInsert, j);
			break;
		}
	}
}

template<typename T>
void Print(List<T>& list)
{
	cout << "LIST: " << endl;

	for (int i = 0; i < list.GetCount(); i++)
	{
		cout << "POSITION: " << i << endl;
		cout << "NUMBER: " << list.at(i)->GetData() << endl;
		cout << endl << endl;
	}
}

template<typename T>
void Fill(Stack<T>& stack, int& count, int& maxNum, int& minNum)
{
	float numberToInsert;

	for (int i = 0; i < count; i++)
	{
		numberToInsert = GetRandomFloat(minNum, maxNum);
		
		stack.Push(numberToInsert);
	}
}

template<typename T>
void Fill(Queue<T>& queue, int& count, int& maxNum, int& minNum)
{
	float numberToInsert;

	for (int i = 0; i < count; i++)
	{
		numberToInsert = GetRandomFloat(minNum, maxNum);

		queue.Enqueue(numberToInsert);
	}
}
