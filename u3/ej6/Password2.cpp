//
// Created by Matias Volpe on 11/04/2022.
//

#include <iostream>
#include <cassert>
#include "Password2.h"

Password2::Password2() : Password2(8) {}

Password2::Password2(int t_longitud) : m_longitud{t_longitud} {
  assert(t_longitud > 0);
  assert(t_longitud < 100);

}

void Password2::set_longitud(int t_longitud) {
  assert(t_longitud > 0);
  assert(t_longitud < 100);

  m_longitud = t_longitud;

}

char *Password2::generar_password() {
  char *resultado = new char[m_longitud + 1];

  for (int i = 0; i < m_longitud; ++i) {
    resultado[i] = generar_caracter_random();
  }

  resultado[m_longitud] = '\0';

  return resultado;
}

char Password2::generar_caracter_random() {
  return 97 + rand() % 25;
}




