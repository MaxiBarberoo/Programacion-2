//
// Created by mbarb on 2/5/2022.
//
#include <iostream>
#include "TanqueDeAgua.h"

using namespace std;

int main(){
    TanqueDeAgua Tanque1;

    cout << "Tanque 1:" << endl;
    cout << "Capacidad Maxima: " << Tanque1.getCapacidadMaxima() << "Lts" << endl;
    cout << "Contenido: " << Tanque1.getContenido() << "Lts \n" << endl;

    Tanque1.setCapacidadMaxima(500);
    Tanque1.setContenido(200);
    cout << "Tanque 1 modificado con setters:" << endl;
    cout << "Capacidad Maxima: " << Tanque1.getCapacidadMaxima() << "Lts" << endl;
    cout << "Contenido: " << Tanque1.getContenido() << "Lts \n" << endl;

    cout << "Agrego 50 litros al Tanque 1: " << endl;
    Tanque1.AgregarLitros(50);
    cout << "Contenido: " << Tanque1.getContenido() << "Lts \n" << endl;

    cout << "Quito 90 litros al Tanque 1: " << endl;
    Tanque1.QuitarLitros(90);
    cout << "Contenido: " << Tanque1.getContenido() << "Lts \n" << endl;

    //Verificar asserts
    //Tanque1.AgregarLitros(600);
    //Tanque1.QuitarLitros(800);

    cout << "Quito La mitad al Tanque 1: " << endl;
    Tanque1.QuitarMitad();
    cout << "Contenido: " << Tanque1.getContenido() << "Lts \n" << endl;

    cout << "Le faltan " << Tanque1.LitrosParaCapacidadMaxima() << "Lts Para llegar a su capacidad maxima \n" << endl;

    cout << "Verifico si esta lleno o vacio" << endl;

    if(Tanque1.EstaLleno() == true){
        cout << "Esta lleno \n" << endl;
    }else if (Tanque1.EstaVacio() == true){
        cout << "Esta vacio \n"  << endl;
    }else{ cout << "No esta ni lleno ni vacio \n" << endl;}

    cout << "Lleno El tanque" << endl;
    Tanque1.Llenar();
    cout << "Verifico si esta lleno o vacio" << endl;

    if(Tanque1.EstaLleno() == true){
        cout << "Esta lleno \n" << endl;
    }else if (Tanque1.EstaVacio() == true){
        cout << "Esta vacio \n"  << endl;
    }else{ cout << "No esta ni lleno ni vacio \n" << endl;}

    cout << "Vacio El tanque" << endl;
    Tanque1.Vaciar();
    cout << "Verifico si esta lleno o vacio" << endl;

    if(Tanque1.EstaLleno() == true){
        cout << "Esta lleno \n" << endl;
    }else if (Tanque1.EstaVacio() == true){
        cout << "Esta vacio \n"  << endl;
    }else{ cout << "No esta ni lleno ni vacio \n" << endl;}



}
