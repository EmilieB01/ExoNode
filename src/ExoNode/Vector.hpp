#pragma once
#include "Node.hpp"
#include "iterator.hpp"

template <typename T>

class Vector
{
	Node<T>* begin;
	Node<T>* end;
	int count;

public:
	Vector();

	void push_back(T value);
	int size() const;
	Iterator<T> Getbegin() const;
	T operator[](int index) const;

};

template <typename T>
Vector<T>::Vector()
{
	size = 0;
	begin = nullptr;
	end = nullptr;
}

template <typename T>
void Vector<T>::push_back(T value)
{
	if (begin == nullptr) 
	{
		begin = new Node<T>{ value };
		end = new Node<T>{};
		begin->next = end;
		end->prev = begin;
	} 
	else 
	{

		Node<T> t = new Node<T>{ value };
		t->prev = end->prev;
		t->next = end;
		end->prev->next = t;
		end->prev = t;
	}		

	count++;
}

template <typename T>
int Vector<T>::size() const
{
	return count;
}

template <typename T>
Iterator<T> Vector<T>::Getbegin() const
{
	return Iterator<T>(begin);
}

template <typename T>
T Vector<T>::operator[](int index) const
{
	Iterator<T> it = begin();
	it += index;

	return *it;
}