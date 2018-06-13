#include <iostream>
#include "operations.h"
#include "node.h"
#include "graph.h"

using namespace std;

int main(){
    Operations blarg;
    QList <QMap <QString,QString> > output = blarg.read_airports();
    return 0;
}

