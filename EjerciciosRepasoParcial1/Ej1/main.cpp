//
// Created by mbarb on 25/4/2022.
//
#include <iostream>
#include "Articulo.h"
using namespace std;

int main(){
    Articulo articulo1(40);

    cout << "Precio por mayor: " << articulo1.get_PrecioPorMayor() << endl;
    cout << "Precio por menor: " << articulo1.get_PrecioPorMenor() << endl;

    articulo1.Incrementro(-45);

    cout << "Precio por mayor: " << articulo1.get_PrecioPorMayor() << endl;
    cout << "Precio por menor: " << articulo1.get_PrecioPorMenor() << endl;

}
