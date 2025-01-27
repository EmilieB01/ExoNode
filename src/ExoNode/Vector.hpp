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

	void push_back(T value);
	void size();
	void begin();
	void operator[](int);

};

template <typename T>
Vector<T>::Vector()
{
	begin = nullptr;
	end = nullptr;
}

template <typename T>
void Vector<T>::push_back(T value)
{
	if (begin == nullptr) {
		begin = new Node<T>{ value };
		end = new Node<T>{};
		begin->next = end;
		end->prev = begin;
	} else {
		Node<T> t = new Node<T>{ value };
		t->prev = end->prev;
		t->next = end;
		end->prev->next = t;
		end->prev = t;
	}
}

template <typename T>
void Vector<T>::size()
{

}


