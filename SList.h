#pragma once
#include <iostream>

using namespace std;

template <typename T>
struct Node
{
	T data;
	Node* next;
};

template <typename T>
class SList
{
private:
	Node<T>* first = nullptr;
	Node<T>* last = nullptr;
	int size = 0;
public:
	SList() = default;
	~SList();
	void addOnFirst(const T& element);

	void addOnLast(const T& element);	// додавання елемента в хвіст

	void deleteFromFirst();				// видалення елемента з голови

	void deleteFromLast();				// видалення елемента з хвоста

	void deleteAll();					// видалення всіх елементів

	void print();
	bool isEmpty();
};

template<typename T>
inline SList<T>::~SList()
{
	if (!isEmpty())
	{
		delete first;
		delete last;
	}
}

template<typename T>
inline void SList<T>::addOnFirst(const T& element)
{
	Node<T>* newNode = new Node<T>{ element, nullptr };
	if (isEmpty())
	{
		first = newNode;
		last = newNode;
	}
	else
	{
		newNode->next = first;
		first = newNode;
	}
	++size;
}

template<typename T>
inline void SList<T>::addOnLast(const T& element)
{
	Node<T>* newNode = new Node<T>{ element, nullptr };
	if (isEmpty())
	{
		first = newNode;
		last = newNode;
	}
	else
	{
		newNode->next = last;
		first = newNode;
	}
	++size;
}

template<typename T>
inline void SList<T>::deleteFromFirst()
{
	if (isEmpty())
	{
		cout << "List empty\n";
	}
	else
	{
		//Node<T>* temp = first;
		//int tempSize = size;
		//while (temp != nullptr && tempSize != 1)
		//{
		//	if (tempSize == 1)
		//	{
		//		first->data = nullptr;
		//		//first = temp;
		//		temp = nullptr;
		//		//first->data = nullptr;
		//		//return;
		//	}
		//	--tempSize;
		//	temp = first->next;
		//}
	}
}

template<typename T>
inline void SList<T>::deleteFromLast()
{
	if (isEmpty())
	{
		cout << "List empty\n";
	}
	else
	{
		Node<T>* temp = first;
		first = nullptr;
		first = temp->next;
	}
}

template<typename T>
inline void SList<T>::deleteAll()
{
	if (!isEmpty())
	{
		delete first;
		first = nullptr;
		delete last;
		last = nullptr;
	}
}

template<typename T>
inline void SList<T>::print()
{
	Node<T>* temp = first;
	cout << "List: \t";
	while (temp != nullptr)
	{
		cout << temp->data << "\t";
		temp = temp->next;
	}
	cout << endl;
}

template<typename T>
inline bool SList<T>::isEmpty()
{
	return first == nullptr;
}
