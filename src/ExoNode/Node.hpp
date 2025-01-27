#pragma once

template <typename T>

struct Node
{
	T value;
	Node<typename T>* prev;
	Node<typename T>* next;
};