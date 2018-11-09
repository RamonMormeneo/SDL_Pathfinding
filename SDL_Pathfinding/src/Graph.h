#pragma once
#include "Node.h"
class Graph
{
public:
	Graph(std::vector<std::vector < int>> *terrain);
	~Graph();
	Node *Start;
	std::vector<std::vector < int>> *grid;
};

