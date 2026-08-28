#include <iostream>
#include <string>

using namespace std;

struct Nodo{
    string nombre;
    float nota_final;
    Nodo* siguiente;
};

void insertarAlInicio(Nodo*&  cabeza, string nombre, float nota){
    Nodo* nuevo = new Nodo;

    nuevo->nombre = nombre;
    nuevo->nota_final = nota;

    nuevo->siguiente = cabeza;

    cabeza = nuevo;
}

int main(){

    return 0;
}