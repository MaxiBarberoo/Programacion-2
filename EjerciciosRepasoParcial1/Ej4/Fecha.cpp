//
// Created by mbarb on 25/4/2022.
//

#include "Fecha.h"
#include <cassert>
int Fecha::diferenciaEnAnios(Fecha otra) {
    retunr 0;
}

Fecha::Fecha(unsigned int t_dia, unsigned int t_mes, unsigned int t_anio): m_dia{t_dia}, m_mes{t_mes}, m_anio{t_anio} {
    assert(t_dia >= 1 && t_dia <= 31);
    assert(t_mes >= 1 && t_mes <= 12);
    assert(t_anio >= 0 && t_anio <= 2022);

}