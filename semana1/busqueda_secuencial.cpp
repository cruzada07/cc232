#include <iostream>
using namespace std;

int main(){
    int arr[] = {12,16,4,27,8,73};
    bool band = false;
    int i=0, num;
    cout<<"Ingrese un numero: "; cin>>num;

    while((band==false) && (i<6)){
        if(arr[i] == num){
            band = true;
        }
        i++;
    }

    if(band){
        cout<<"Su numero fue encontrado en la posicion "<<i-1<<endl;
    }else{
        cout<<"Su numero no fue entcontrado"<<endl;
    }

    return 0;
}