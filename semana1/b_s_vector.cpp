#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Función plantilla (template) para realizar la búsqueda secuencial en cualquier tipo de vector
template <typename T>
int busquedaSecuencial(const vector<T>& vec, const T& objetivo) {
    for (int i = 0; i < vec.size(); ++i) {
        if (vec[i] == objetivo) {
            return i; // Retorna el índice donde se encontró
        }
    }
    return -1; // Retorna -1 si no se encuentra el elemento
}

int main() {
    // a) Búsqueda lineal para datos numéricos
    vector<int> numeros = {15, 42, 8, 23, 99, 4};
    int numBuscado;

    cout << "\tA) BUSQUEDA EN VECTOR NUMERICO" << endl;
    cout << "Vector de enteros: {15, 42, 8, 23, 99, 4}" << endl;
    cout << "Ingrese el numero a buscar: ";
    cin >> numBuscado;

    int posNum = busquedaSecuencial(numeros, numBuscado);

    if (posNum != -1) {
        cout << "El numero " << numBuscado << " se encuentra en el indice " << posNum << " (posicion " << posNum + 1 << ")." << endl;
    } else {
        cout << "El numero " << numBuscado << " no se encuentra en el vector." << endl;
    }

    cout << endl;

    // b) Búsqueda lineal para cadenas (strings)
    vector<string> frutas = {"manzana", "platano", "naranja", "uva", "pera"};
    string cadenaBuscada;

    cout << "\tB) BUSQUEDA EN VECTOR DE CADENAS" << endl;
    cout << "Vector de cadenas: {\"manzana\", \"platano\", \"naranja\", \"uva\", \"pera\"}" << endl;
    cout << "Ingrese la cadena a buscar: ";
    cin >> cadenaBuscada;

    int posCadena = busquedaSecuencial(frutas, cadenaBuscada);

    if (posCadena != -1) {
        cout << "La cadena \"" << cadenaBuscada << "\" se encuentra en el indice " << posCadena << " (posicion " << posCadena + 1 << ")." << endl;
    } else {
        cout << "La cadena \"" << cadenaBuscada << "\" no se encuentra en el vector." << endl;
    }

    return 0;
}