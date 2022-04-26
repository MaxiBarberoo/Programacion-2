//
// Created by mbarb on 25/4/2022.
//

#include "Reloj.h"
#include "Hora.h"
#include "Temperatura.h"

#include <iostream>
using namespace std;

int main(){
    Reloj R1;
    Hora H1(24, 59, 50);
    Hora Alarma1(24, 59, 30);
    Temperatura T1(30);
    R1.set_hora(H1);
    R1.set_temperatura(T1);
    R1.mostrarTemperatura('F');
    R1.mostrarTemperatura('C');
    R1.mostrarTemperatura('K');
    R1.mostrarHora();
    R1.set_alarma(Alarma1);

    cout << R1.esta_activa_la_alarma();
}