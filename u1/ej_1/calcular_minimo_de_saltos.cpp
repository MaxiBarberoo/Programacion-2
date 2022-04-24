//
// Created by Matias Volpe on 07/03/2022.
//
#include <iostream>

#include "calcular_minimo_de_saltos.h"

int calcular_minimo_de_saltos(int x, int y, int d) {
  if (!(x <= y)) {
    throw std::runtime_error("x no es menor o igual que y");
  }
  if (!(d > 0)) {
    throw std::runtime_error("d debe ser mayor que 0");
  }

  int salto_extra = ((y - x) % d) > 0 ? 1 : 0;

  return ((y - x) / d) + salto_extra;

}