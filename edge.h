#ifndef EDGE_H
#define EDGE_H

#include "vertex.h"

template<typename G>
class Edge {
    public:
        typedef typename G::E E;
        typedef typename G::vertex vertex;

        vertex* vertexes[2];

    private:
        E data;
};

#endif