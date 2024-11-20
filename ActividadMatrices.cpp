/*
Solicitar al usuario datos para llenar 2 matrices de tamaño 4x4, hacer la multiplicacion 
1 a 1 y presentar el resultado
*/

#include <iostream>
using namespace std;

int main(){
    int matriz_1[4][4];
    int matriz_2[4][4];

    cout<<"Datos de la matriz 1\n";
    for(int i=0;i<4;i++){ // ciclo para llenar la matriz 1
        for(int j=0;j<4;j++){
            cout<<"Digita los datos de la fila #"<<i+1<<" en la columna "<<j+1<<":";
            cin>>matriz_1[i][j];
        }
        cout<<"\n";
    }
    cout<<"\nDatos de la matriz 2\n";
    for(int i=0;i<4;i++){ // ciclo para llenar la matriz 2
        for(int j=0;j<4;j++){
            cout<<"Digita los datos de la fila #"<<i+1<<" en la columna "<<j+1<<":";
            cin>>matriz_2[i][j];
        }
        cout<<"\n";
    }

    cout<<"\nMatriz resultado: \n";
    for(int i=0;i<4;i++){ // ciclo para multiplicar los valores de las matrices 1 y 2
        for(int j=0;j<4;j++){
            cout<<(matriz_1[i][j])*(matriz_2[i][j])<<" ";
        }
        cout<<"\n";
    }

    return 0;
}