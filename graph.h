#ifndef GRAPH_H
#define GRAPH_H
#include <vector>
#include "node.h"

class Graph{
public:
    Graph();
    std::vector<node> get_graph() const {return _graph;}
private:
    std::vector<node> _graph;
};

#endif // GRAPH_H
