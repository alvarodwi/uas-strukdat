#include "./util/graph.hpp"
#include <cstdio>

int main()
{
    util::Graph g(6);
    g.add_weighted_edge(0, 1, 92);
    g.add_weighted_edge(0, 3, 167);
    g.add_weighted_edge(0, 2, 128);
    g.add_weighted_edge(1, 2, 86);
    g.add_weighted_edge(1, 3, 76);
    g.add_weighted_edge(2, 3, 100);

    g.kruskal();
    g.print_graph();
    printf("\n");
    g.print_mst();

    return 0;
}