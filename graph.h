#ifndef GRAPH_H
#define GRAPH_H
#include <vector>
#include "node.h"
#include "operations.h"

class Graph{
public:
    Graph();
    std::vector<node> get_graph() const {return _graph;}
    unsigned int size();
private:
    std::vector<node> _graph;
};

#endif // GRAPH_H
