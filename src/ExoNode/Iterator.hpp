#pragma once
#include "Node.hpp"

template <typename T>

class Iterator
{
	Node<T>* mCurrent;

public:
	Iterator(Node<T>* current);

	void operator+=(int delta);
	void operator++();
	void operator-=(int delta);
	void operator--();
	T operator*();
};

template <typename T>

Iterator<T>::Iterator(Node<T>* current)
{
	mCurrent = current;
}

template <typename T>

void Iterator<T>::operator+=(int delta)
{ 
	for (int i = 0; i < delta; i++)
	{
		++this;
	}
}

template <typename T>
void Iterator<T>::operator++()
{

	if (mCurrent->next == nullptr)
		return;

	mCurrent = mCurrent->next;

}

template <typename T>

void Iterator<T>::operator-=(int delta)
{
	for (int i = 0; i < delta; i++)
	{
		--this;
	}
}
template <typename T>

void Iterator<T>::operator--()
{
	if (mCurrent->next == nullptr)
		return;

	mCurrent = mCurrent->prev;
}

template <typename T>

T Iterator<T>::operator*()
{
	return mCurrent->value;
} 