#include <iostream>
using namespace std;

struct Estudiante{
    string nombre;
    float nota_final;
};
void leerDatos(Estudiante* estudiantes, int N){
    for(int i =0; i<N; i++){
        cout<<"\nIngrese el nombre del estudiante "<<i+1<<": ";
        cin>>estudiantes[i].nombre;

        cout<<"Ingrese la nota final: ";
        cin>>estudiantes[i].nota_final;
    }
}


void calcularEstadisticas(Estudiante* estudiantes, int N){
    float suma = 0;
    int indmax = 0;

    for(int i=0; i<N; i++){
        suma += estudiantes[i].nota_final;

        if(estudiantes[indmax].nota_final< estudiantes[i].nota_final){
            indmax = i;
        }
    }

    float promedio = suma/N;
    cout<<"\nPromedio general: "<<promedio;
    cout<<"\nEstudiante con la nota mas alta:"<<endl;
    cout<<"\tNombre:\t"<<estudiantes[indmax].nombre<<endl;
    cout<<"\tNota:\t"<<estudiantes[indmax].nota_final<<" pts.";

}

int main(){
    int N;
    cout<<"Ingrese el numero total de alumnos: ";
    cin>> N;
    Estudiante* estudiantes = new Estudiante[N];

    leerDatos(estudiantes, N);
    calcularEstadisticas(estudiantes, N);

    delete[] estudiantes;

    return 0;
}