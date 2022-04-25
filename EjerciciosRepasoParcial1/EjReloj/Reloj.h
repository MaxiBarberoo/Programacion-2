//
// Created by mbarb on 25/4/2022.
//

#ifndef UCC_2022_RELOJ_H
#define UCC_2022_RELOJ_H

#include "Hora.h"
#include "Temperatura.h"


class Reloj {
public:
    Reloj();

    void set_hora(Hora hora);
    void mostrarHora();
    void set_temperatura(Temperatura temperatura);
    void mostrarTemperatura(char unidad_de_temperatuira);

    void set_alarma(Hora hora, unsigned int duracion = 20);
    bool esta_activa_la_alarma();

private:
    Hora m_hora_actual;
    Hora hora_de_alarma;
    unsigned int duracion_alarma_enSegundos = 20;
    Temperatura m_temperatura;
};


#endif //UCC_2022_RELOJ_H
