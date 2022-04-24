//
// Created by Matias Volpe on 11/04/2022.
//

#include <iostream>
#include <cassert>
#include "Password.h"

Password::Password() : Password(8) {}

Password::Password(int t_longitud) : m_longitud{t_longitud} {
  assert(t_longitud > 0);
  assert(t_longitud < 100);

  generar_password();
}

void Password::set_longitud(int t_longitud) {
  assert(t_longitud > 0);
  assert(t_longitud < 100);

  m_longitud = t_longitud;

  generar_password();
}

void Password::generar_password() {
  for (int i = 0; i < m_longitud; ++i) {
    m_datos[i] = generar_caracter_random();
  }

  m_datos[m_longitud] = '\0';
}

char Password::generar_caracter_random() {
  return 97 + rand() % 25;
}

void Password::visualizar() {
  std::cout << "contrasenia: " << m_datos << std::endl;
  std::cout << "longitud: " << m_longitud << std::endl;
}


