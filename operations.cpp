#include "operations.h"
#include <cmath>

Operations::Operations(){
    //need to populate _locations based on _graph
}

node* Operations::dijkstra(std::vector<node> graph, node *start, node *target){
}

node* Operations::find(std::string name){
}

double Operations::distance(node *start, node *end){
    double radius = 3959, distance = 0;
    distance = radius * (atan(sqrt(pow(cos(end->latitude) * sin(abs(start->longitude - end->longitude)), 2)
                                   + pow(cos(start->latitude) * sin(end->latitude) - sin(start->latitude)
                                         * cos(end->latitude) * cos(abs(start->longitude - end->longitude)), 2))
                              / (sin(start->latitude) * sin(end->latitude) + cos(start->latitude) * cos(end->latitude)
                                 * cos(abs(start->longitude - end->longitude)))));
    return distance;
}
