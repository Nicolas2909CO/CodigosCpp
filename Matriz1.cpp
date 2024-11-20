/*
Leer los elementos de una matriz N X N,(min 3, max 15), llenar otra 
matriz equivalente con 10 si los numeros son pares, -1 si son impares,
mostrar las matrices original y equivalente.
*/

#include <iostream>
using namespace std;

int main(){
    int tamanio;

    cout<<"De que tamanio va a ser la matriz? (Minimino 3 Maximo 15)\nRespuesta: ";
    cin>>tamanio;

    while(tamanio <3 || tamanio >15){ //Ciclo para verificar que el tamanio ingresado no incumpla los limites presentados
        cout<<"El tamanio ingresado incumple los limites presentados, por favor digita un tamanio que cumpla con los requerimientos\nRespuesta: ";
        cin>>tamanio;
    } // Fin del ciclo

    int matriz[tamanio][tamanio];
    int matriz_resultado[tamanio][tamanio];

    cout<<"\nDigite los valores para la matriz: "<<endl;
    
    for(int i=0;i<tamanio;i++){
        for(int j=0;j<tamanio;j++){
            cout<<"Valor de la fila #"<<i+1<<" en la posicion "<<j+1<<":";
            cin>>matriz[i][j];
        }
    }

    for(int i=0;i<tamanio;i++){
        for(int j=0;j<tamanio;j++){
            if(matriz[i][j]%2==0){ //Numero par
                matriz_resultado[i][j]=10;
            }else{
                matriz_resultado[i][j]=-1;
            }
        }
    }

    cout<<"Matriz Original: "<<endl;

    for(int i=0;i<tamanio;i++){
        for(int j=0;j<tamanio;j++){
            if(j!=tamanio-1 && j!= 0){  // para imprimir a, a....
                cout<<matriz[i][j]<<" , ";
            }else if(j==tamanio-1){            // para imprimir a]
                cout<<matriz[i][j]<<"]"; 
            }else if(j==0){ // para imprimir [a , ...
                cout<<"["<<matriz[i][j]<<" , ";
            }
        }
        cout<<endl;
    }

    cout<<"\nMatriz Resultado: "<<endl;
    
    for(int i=0;i<tamanio;i++){
        for(int j=0;j<tamanio;j++){
            if(j!=tamanio-1 && j!= 0){  // a, a....
                cout<<matriz_resultado[i][j]<<" , ";
            }else if(j==tamanio-1){            // para imprimir a]
                cout<<matriz_resultado[i][j]<<"]"; 
            }else if(j==0){ // para imprimir [a , ...
                cout<<"["<<matriz_resultado[i][j]<<" , ";
            }
        }
        cout<<endl;
    }


    return 0;
}