#include "graph.h"

Graph::Graph(){
    //must populate graph with contents of airport xml



    //temp hardcode for Luz's testing:
    node A(-6.081689, 145.391881, "Goroka");
    node B(69.108055, -105.138333, "Cambridge Bay");
    node C(44.225277, -76.596944, "Kingston");
    node D(48.544167, -58.549999, "Stephenville");
    node E(8.167, 35.55, "Gore Airport");

    A.add_neigh(&B);
    A.add_neigh(&D);
    B.add_neigh(&E);
    C.add_neigh(&A);
    C.add_neigh(&B);
    D.add_neigh(&B);
    D.add_neigh(&C);
    E.add_neigh(&C);

    _graph.push_back(A);
    _graph.push_back(B);
    _graph.push_back(C);
    _graph.push_back(D);
    _graph.push_back(E);
}

unsigned int Graph::size(){
    return _graph.size();
}
