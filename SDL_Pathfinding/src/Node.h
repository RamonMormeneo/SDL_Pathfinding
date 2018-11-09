#pragma once
#include "Edge.h"
#include <vector>
class Node
{
public:
	Node();
	~Node();
	Node *Father;
	float weight, totalweight;
	std::vector <Edge> Sons;
};

