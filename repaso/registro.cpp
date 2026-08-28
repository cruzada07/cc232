#include <iostream>
using namespace std;

struct Estudiante{
    string nombre;
    float nota_final;
};


int main(){
    Estudiante record[3];
    float suma=0;
    int indmax=0;
    for (int i = 0; i < 3; i++){
        cout<<"Ingrese el nombre del estudiante "<<i+1<<": ";
        cin>>record[i].nombre;

        cout<<"Ingrese la nota final del estudiante "<<i+1<<": ";
        cin>>record[i].nota_final;
        cout<<endl;
        suma += record[i].nota_final;

        if(record[indmax].nota_final < record[i].nota_final){
            indmax = i;
        }
    }
    float promedio = suma/3;
    
    cout<<"El promedio general es: "<<promedio;
    cout<<"\nEl alumno con mayor nota es el Alumno "<<record[indmax].nombre<<" con "<<record[indmax].nota_final<<" pts.";

    return 0;
}