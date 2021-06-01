#pragma once
#include <utility>
#include "linked_list.hpp"

namespace util
{
#define edge std::pair<int, int>
#define weighted_edge std::pair<int, edge>

    class Graph
    {
    private:
        util::LinkedList<weighted_edge> graph;
        util::LinkedList<weighted_edge> mst;
        int *parent;
        int size;

    public:
        Graph(int size);
        void add_weighted_edge(int from, int to, int weight);
        int find_set(int i);
        void union_set(int u, int v);
        void kruskal();
        void print_graph();
        void print_mst();
    };

    Graph::Graph(int size)
    {
        graph = util::LinkedList<weighted_edge>();
        mst = util::LinkedList<weighted_edge>();
        parent = new int[size];

        for (int i = 0; i < size; i++)
            parent[i] = i;

        graph.clear_list();
    }

    void Graph::add_weighted_edge(int from, int to, int weight)
    {
        graph.push_back(weighted_edge(weight, edge(from, to)));
    }

    int Graph::find_set(int i)
    {
        if (i == parent[i])
            return i;
        else
            return find_set(parent[i]);
    }

    void Graph::union_set(int u, int v)
    {
        parent[u] = parent[v];
    }

    void Graph::kruskal()
    {
        int i, uRep, vRep;
        graph.sort_asc();
        for (i = 0; i < graph.get_size(); i++)
        {
            weighted_edge temp = graph.at(i);
            uRep = find_set(temp.second.first);
            vRep = find_set(temp.second.second);
            if (uRep != vRep)
            {
                mst.push_back(temp);
                union_set(uRep, vRep);
            }
        }
    }

    void Graph::print_graph()
    {
        int total = 0;
        for (int i = 0; i < graph.get_size(); i++)
        {
            weighted_edge temp = graph.at(i);
            total += temp.first;
            printf("%d-%d|%d\n", temp.second.first, temp.second.second, temp.first);
        }
        printf("%s: %d\n", "Total", total);
    }

    void Graph::print_mst()
    {
        int total = 0;
        for (int i = 0; i < mst.get_size(); i++)
        {
            weighted_edge temp = mst.at(i);
            total += temp.first;
            printf("%d-%d|%d\n", temp.second.first, temp.second.second, temp.first);
        }
        printf("%s: %d\n", "Total", total);
    }
}