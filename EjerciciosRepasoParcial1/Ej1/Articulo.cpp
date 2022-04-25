//
// Created by mbarb on 25/4/2022.
//

#include "Articulo.h"
#include <cassert>

Articulo::Articulo(float t_costoBase): m_costoBase{t_costoBase} {
assert(t_costoBase >= 0);
}

float Articulo::get_PrecioPorMayor() {
    return m_costoBase * 1.15;
}

float Articulo::get_PrecioPorMenor() {
    return m_costoBase * 1.30;
}

void Articulo::Incrementro(float incremento) {
    assert(m_costoBase + incremento >= 0);

    m_costoBase += incremento;
}
