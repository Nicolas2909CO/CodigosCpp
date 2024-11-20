/*
Programa que solicite 5 valores enteros, calcule y almacene de cada uno: 
- El doble
- El cuadrado
Solicite al usuario si quiere ver:
- El doble o el cuadrado o ambos
- De alguno o de todos
- O volver a ingresar numeros
*/
#include <iostream> 
using namespace std;

int main(){
    int valores_enteros[5];
    int dobles_cuadrados[5][5]; //valor[doble][cuadrado]
    int eleccion,bucle;
    char si_no;

    do{
        cout<<"Digite 5 valores enteros:\n";
        for(int i=0;i<5;i++){
            cout<<"Valor #"<<i+1<<": ";
            cin>>valores_enteros[i];
            while(valores_enteros[i]!=int(valores_enteros[i])){ //Si el valor digitado es diferente a su forma entera, entonces no es un numero entero
                cout<<"El valor digitado no es un entero\nvalor #"<<i+1<<": ";
                cin>>valores_enteros[i];
            } //Fin del ciclo para confirmar que sea un entero
            //Ahora guardamos el doble y el cuadrado del numero digitado
            dobles_cuadrados[i][0]= valores_enteros[i]*2;
            dobles_cuadrados[i][1]= valores_enteros[i]*valores_enteros[i];
        }
        //Pedimos al usuario su desicion
        do{
            do{
                cout<<"\nA continuacion, digita:\n1. Ver el doble\n2. Ver el cuadrado\n3. Ver el doble y el cuadrado\n4. Volver a ingresar numeros\nEleccion: ";
                cin>> eleccion;
            }while(eleccion>5||eleccion<=0);
            //Segun la decision del usuario, ahora hacemos una accion
            switch (eleccion){
                case 1:
                    for(int i=0;i<5;i++){
                        cout<<"Doble del numero "<<valores_enteros[i]<<" Es: "<<dobles_cuadrados[i][0]<<endl;
                    }
                    bucle=0;
                    break;
                case 2:
                    for(int i=0;i<5;i++){
                        cout<<"Cuadrado del numero "<<valores_enteros[i]<<" Es: "<<dobles_cuadrados[i][1]<<endl;
                    }
                    bucle=0;
                    break;
                case 3:
                    for(int i=0;i<5;i++){
                        cout<<"Numero "<<valores_enteros[i]<<"--- Doble: "<<dobles_cuadrados[i][0]<<" Cuadrado: "<<dobles_cuadrados[i][1]<<endl; //numero 2 --- doble: 4 cuadrado: 4
                    }
                    bucle=0;
                    break;
                case 4:
                    bucle=1;
                    si_no='n';
                    break;
            }
            if(bucle!=1){
                cout<<"Quieres volver al menu de opciones? (s/n)\nEleccion: ";
                cin>>si_no;
                while(si_no!='s'&& si_no!='S'&& si_no!='n'&& si_no!='N'){
                    cout<<"La opcion digitada no es valida, digita s o n\nEleccion: ";
                    cin>>si_no;
                }
            }
        }while(si_no=='s'||si_no=='S');
    }while(bucle==1);
    return 0;
}