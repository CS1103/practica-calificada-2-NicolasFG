#ifndef CS1103_PC2_201902_HEAP_H;
#define CS1103_PC2_201902_HEAP_H

#include <fstream>
#include <string>
#include <vector>

using namespace std;


// Definicion de la estructura generica para max head (pila)
template<class T, class Contenedor>
struct head
{
   vector<T> info;

    // Encuentra el mayor valor en la pila
    int get_max(){
        int max = -10000;
        for(int i = 0; i < info.size(); i++){
            if(info[i] > max){
                max = info[i];
            }
        }

        return  max;
    }

    // Inserta un item
    void insert(int data){
        info.push_back(data);
    }

    // Imprime los elementos del head, posiblemente sobrecarga
    void print(){
        for(int i = 0; i < info.size(); i++){
            cout << info[i] << " ";
        }
    }






    friend std::ostream& operator << (std::ostream& out, const head<Contenedor>& head){
        for(auto &v:head.datos) {
            out<< v << " ";
        }
        return out;
    }

};

// Prototipo de la funcion lee un archivo y carga los valores al head
template <class tipo1, class tipo2>
void load_from(tipo1& file_name, tipo2& hp){
    // Limpiamos el vector
    hp.info.empty();

    int valor = 0; //
    ifstream valores(file_name); //Apertura del archivo en modo lectura
    if(valores.is_open()){
        while (valores >> valor){
            hp.insert(valor);
        }
    }
    valores.close();
}










#endif //CS1103_PC2_201902_HEAP_H
