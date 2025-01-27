#include "pch.h"
#include "main.h"
#include "Node.hpp"
#include "Iterator.hpp"
#include <iostream>

int main()
{
#ifdef _DEBUG
	_CrtDumpMemoryLeaks();
#endif

	float x1 = 1.f;
	float x2 = 2.f;
	float x3 = 3.f;
	float x4 = 4.f;
	float x5 = 5.f;

	Node n1 = { x1 };

	Node n2 = { x2 };
	n1.next = &n2;
	n2.prev = &n1;

	Node n3 = { x3 };
	n2.next = &n3;
	n3.prev = &n2;

	Node n4 = { x4 };
	n3.next = &n4;
	n4.prev = &n3;

	Node n5 = { x5 };
	n4.next = &n5;
	n5.prev = &n4;

	Iterator i = { &n1 };

	++i;
	std::cout << *i << std::endl;

	i += 2;
	std::cout << i.operator*() << std::endl;

	i--;
	std::cout << i.operator*() << std::endl;

	vector d;
	d[1]

	return 0;
}
 