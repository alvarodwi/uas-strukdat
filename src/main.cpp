#include "util/graph.hpp"
#include <iostream>

int main()
{
    int n, e;

    std::cout << "[KRUSKAL]\n\n";
    std::cin >> n >> e;

    util::Graph g(n);

    int k1, k2, b;
    for (int i = 0; i < e; i++)
    {
        std::cin >> k1 >> k2 >> b;
        g.add_weighted_edge(k1, k2, b);
    }
    std::cout << ">> Graph\n";
    g.print_graph();

    g.kruskal();

    std::cout << "\n>> MST dari Graph\n";
    g.print_mst();

    g.clear();

    return 0;
}