#pragma once
#include "Node.hpp"
#include "iterator.hpp"

template <typename T>

class Vector
{
	Node<T>* begin;
	Node<T>* end;
	Iterator i;

public:
	Vector();

	void push_back(Node<T>* node);
	void size();
	void begin();
	void operator[](int);

};

template <typename T>

Vector<T>::Vector()
{
	begin = end = nullptr;
}

template <typename T>

void Vector<T>::push_back(Node<T>* node)
{

}
template <typename T>

void Vector<T>::size()
{

}


