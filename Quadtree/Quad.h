#pragma once
#include "Node.h"
#include <cmath>

// The main quadtree class
class Quad
{
public:
	Quad();
	Quad(Point topL, Point botR);
	~Quad();
	void insert(Node*);
	Node* search(Point);
	bool inBoundary(Point);

private:
	// Hold details of the boundary of this node
	Point topLeft;
	Point botRight;

	// Contains details of node
	Node* n;

	// Children of this tree
	Quad* topLeftTree;
	Quad* topRightTree;
	Quad* botLeftTree;
	Quad* botRightTree;
};

