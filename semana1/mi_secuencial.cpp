#include <iostream>
using namespace std;

int main(){
    int arr[] = {2,5,12,19,22};
    int i=0;

    int num;
    cout<<"Ingrese un numero: ";
    cin>> num;

    while((i<5) && (num != arr[i])){
        i++;
    }
    if(i==5){
        cout<<"\nNo encontramos su numero en el arreglo";
    }else{
        cout<<"\nSu numero se encuentra en la posicion "<<i+1<<" del arreglo";
    }

    
    return 0;
}