#include<iostream>
using namespace std;
void depositar();
void menu();
void retirar();
void mostrarSaldo();

int saldo=0;
int main(){
    menu();
    return 0;
}
void menu(){
    int opcion;
       do{
        cout<<"\n-- Cajera automatico ---"<<endl;
        cout<<"1. Depositar 100"<<endl;
        cout<<"2. Retirar 100"<<endl;
        cout<<"3. Mostrar Saldo"<<endl;
        cout<<"4. Salir"<<endl;
        cout<<"Seleccine una opcion: ";
        cin>>opcion;
        switch(opcion){
            case 1:
            depositar(); break;
            case 2:
            retirar(); break;
            case 3:
            mostrarSaldo(); break;
            case 4:
            cout<<"Saliendo..."<<endl; break;
            default:
            cout<<"Opcion no valida. Intente de nuevo."<< endl; break;
        }
    } while (opcion!=4);
}
void depositar(){
    saldo += 100;
    cout<<"Se han depositado 100 unidades. Nuevo saldo: "<< saldo <<endl;
}

void retirar(){
    if(saldo>=100){
        saldo-=100;
        cout<<"Se han retirado 100 unidades. Nuevo saldo: " <<saldo<<endl;
    } else{
        cout<<"Saldo actual: "<<saldo<<endl;
    }
}
void mostrarSaldo(){
    cout<<"Saldo actual: "<<saldo<<endl;    
}