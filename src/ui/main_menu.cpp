#include "main_menu.hpp"

void main_menu()
{
    int n;

    std::cout << ">> Input jumlah komputer : ";
    std::cin >> n;

    util::Graph g(n);

    char pilihan = 'y';
    int nk1, nk2, jarak;
    while (pilihan == 'y' || pilihan == 'Y')
    {
        std::cout << ">> Input nomor komputer ke-1: ";
        std::cin >> nk1;

        std::cout << ">> Input nomor komputer ke-2: ";
        std::cin >> nk2;

        std::cout << ">> Jarak antara Komputer ke-1 dan ke-2 : ";
        std::cin >> jarak;

        g.add_weighted_edge(nk1, nk2, jarak);

        std::cout << ">> Tambahkan lagi ? (Y/N) ";
        std::cin >> pilihan;
    }
    g.kruskal();

    std::cout << "<<OUTPUT>>\n";
    std::cout << "Graph yang belum dioptimasi :\n";
    g.print_graph();

    std::cout << "MST dari graph (hasil optimasi) : \n";
    g.print_mst();
}