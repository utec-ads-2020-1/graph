#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include <list>

#include "vertex.h"
#include "edge.h"

using namespace std;

class Traits {
	public:
		typedef string V;
		typedef double E;
};

template<typename Tr>
class Graph {
    public:
        typedef Graph<Tr> self;
        typedef Vertex<self> vertex;
        typedef Edge<self> edge;
        typedef vector<vertex*> VertexSeq;
        typedef list<edge*> EdgeSeq;
        typedef typename Tr::V V;
        typedef typename Tr::E E;
        typedef typename VertexSeq::iterator VertexIte;
        typedef typename EdgeSeq::iterator EdgeIte;

    private:
        VertexSeq nodes;
        VertexIte ni;
        EdgeIte ei;

    public:
        Graph() = default;
        ~Graph();

        vertex* createVertex(V);
        edge* createEdge(V, V);

        VertexIte getVertexes() const;
        EdgeIte getEdges() const;
};

typedef Graph<Traits> graph;

#endif