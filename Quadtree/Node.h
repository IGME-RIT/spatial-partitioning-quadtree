#pragma once
#include "Point.h"

// Node struct: the objects that we want stored in the quadtree
struct Node
{
	Point pos;
	int data;

	Node(Point _pos, int _data)
	{
		pos = _pos;
		data = _data;
	}
	Node()
	{
		data = 0;
	}
};