//
// Created by mbarb on 25/4/2022.
//

#include "Hora.h"
#include <cassert>

Hora::Hora(): Hora(0, 0, 0) {}
Hora::Hora(unsigned int t_horas, unsigned int t_minutos, unsigned int t_segundos): m_horas{t_horas}, m_minutos(t_minutos), m_segundos{t_segundos} {
    assert(t_horas >= 0 && t_horas <= 24);
    assert(t_minutos >= 0 && t_minutos <= 60);
    assert(t_segundos >= 0 && t_segundos <= 60);
}
