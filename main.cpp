#include <iostream>

using namespace std;

#include "heap.h"

int main()
{
    head<int> h;

    h.insert(10);
    h.insert(20);
    h.insert(40);
    h.insert(50);
    h.insert(10);

    h.insert_items(12,12);

    // Obtiene el maximo
    cout << "El maximo es: " << h.get_max() << endl;

    load_from("data.txt", h);

    // Imprime todos los valores
    h.print();


    return 0;
}
