#ifndef VERTEX_H
#define VERTEX_H

template <typename G>
class Vertex {
    public:
        typedef typename G::V V;
        typedef typename G::EdgeSeq EdgeSeq;

        EdgeSeq edges;

    private:
        V data;
        double x;
        double y;
};

#endif