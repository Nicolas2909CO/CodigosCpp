/*
Una empresa requiere hacer el registro de los datos de horarios trabajados por
los empleados, identificacion, horas diurnas, horas extra diurnas, horas nocturnas,
extra nocturnas, horas festivas, horas extra festivas, con los siguientes valores:
hd = 100
hed = 150
hn = 200
hen = 250
hf = 300
hef = 350
calcular valor a pagar
*/

#include <iostream>
using namespace std;

int obtenerValorPagar(int hd, int hed, int hn, int hen, int hf, int hef);

int main(){
    int cantidad;
    int hd, hed, hn, hen, hf, hef;
    cout<<"Bienvenido al registro de datos de los trabajadores"<<endl;
    cout<<"Cantidad de trabajadores a ingresar: ";
    cin>>cantidad;
    int trabajadores[cantidad][cantidad];
    for (int i = 0; i < cantidad; i++){
        cout<<"Digite el numero de identificacion del empleado "<<i+1<<": ";
        cin>>trabajadores[i][0];
        cout<<"Digite la cantidad de horas diurnas: ";
        cin>>hd;
        cout<<"Digite la cantidad de horas extra diurnas: ";
        cin>>hed;
        cout<<"Digite la cantidad de horas nocturnas: ";
        cin>>hn;
        cout<<"Digite la cantidad de horas extra nocturnas: ";
        cin>>hen;
        cout<<"Digite la cantidad de horas festivas: ";
        cin>>hf;
        cout<<"Digite la cantidad de horas extra festivas: ";
        cin>>hef;
        trabajadores[i][1]=obtenerValorPagar(hd, hed, hn, hen, hf, hef);
    }
    
    cout<<"\nTotales a pagar: \n"<<endl;

    for(int i=0;i<cantidad;i++){
        cout<<"Trabajador con Identificacion: "<<trabajadores[i][0]<<" ----- Total a pagar: "<<trabajadores[i][1]<<endl;
    }
    
    return 0;
}

int obtenerValorPagar(int hd, int hed, int hn, int hen, int hf, int hef){
    int total = (hd*100)+(hed*150)+(hn*200)+(hen*250)+(hf*300)+(hef*350);
    return total;
}