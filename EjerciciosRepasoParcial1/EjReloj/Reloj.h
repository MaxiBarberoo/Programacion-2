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
    void set_temperatura(Temperatura temperatura);

private:
    Hora m_hora

    Temperatura m_temperatura;
};


#endif //UCC_2022_RELOJ_H
