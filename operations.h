#ifndef OPERATIONS_H
#define OPERATIONS_H
#include <map>
#include <string>
#include <vector>
#include <iostream>
#include <QString>
#include <QXmlStreamReader>
#include <QFile>
#include <QDebug>
#include <QList>
#include <QMap>
#include "node.h"
#include "graph.h"

class Operations{
public:
    Operations();

    node* dijkstra(std::vector<node> graph, node* start, node* target);
    node* find(std::string name);
    double distance(node* start, node* end);
private:
    std::map<std::string, node*> _locations;

    QList read_airports();
    QList read_routes();
    QMap<QString, QString> parseAirport(QXmlStreamReader& reader);

};

#endif // OPERATIONS_H
