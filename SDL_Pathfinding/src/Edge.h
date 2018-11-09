#pragma once
#include "Node.h"
class Edge
{
public:
	Edge();
	~Edge();
	Node *Start;
	Node *End;
	float weight;
};

