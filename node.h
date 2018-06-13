#ifndef NODE
#define NODE
#include <vector>
#include <string>
struct node{
    std::vector<node*> neighbors;
    double latitude;
    double longitude;
    std::string name;

    node(double lat_input, double long_input, std::string name_input);
    bool add_neigh(node* input); //a neighbor is a node this node is pointing to
};

#endif // NODE

