//
// Created by mbarb on 2/5/2022.
//
#include <iostream>
#include "Punto3D.h"

using namespace std;

int main(){
    Punto3D P1;
    Punto3D P2(2, -4, 5);
    Punto3D P3(10, 23, -4);

    //get P1
    cout << "Punto 1:" << endl;
    cout << "X:" << P1.getCoordenadaX() << endl;
    cout << "Y:" << P1.getCoordenadaY() << endl;
    cout << "Z:" << P1.getCoordenadaZ() << endl;
    //Set P1
    P1.setCoordenadaX(2);
    P1.setCoordenadaY(-4);
    P1.setCoordenadaZ(5);
    cout << "Punto 1 Despues de usar setters" << endl;
    cout << "X:" << P1.getCoordenadaX() << endl;
    cout << "Y:" << P1.getCoordenadaY() << endl;
    cout << "Z:" << P1.getCoordenadaZ() << endl;

    cout << "Punto 2:" << endl;
    cout << "X:" << P2.getCoordenadaX() << endl;
    cout << "Y:" << P2.getCoordenadaY() << endl;
    cout << "Z:" << P2.getCoordenadaZ() << endl;

    if(P1.SonIguales(P2) == true){
        cout << "P1 es igual a P2" << endl;
    }else{
        cout << "No son iguales" << endl;
    }

    cout << "Distancia entre Punto 1 y Punto 3: ";
    cout << P1.DistanciaEntrePuntos(P3) << endl;

}
