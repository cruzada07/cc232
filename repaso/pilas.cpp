// insertar elementos en la pila

#include <iostream>
#include <stdlib.h>
using namespace std;

struct Nodo{
    int dato;
    Nodo* siguiente;
};

void insertarPila(Nodo *&pila, int n){
    Nodo* nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;

    cout<<"Elemento "<<n<<" agregado correctamente.\n";
}

int main(){
    Nodo* pila = NULL;

    int n1,n2;
    cout<<"Ingrese un numero: ";
    cin>>n1;
    insertarPila(pila, n1);
    
    cout<<"\nIngrese un numero: ";
    cin>>n2;
    insertarPila(pila, n2);

    return 0;
}