//
// Created by Matias Volpe on 11/04/2022.
//

#include <iostream>
#include <string>
#include <cassert>
#include "Persona.h"

Persona::Persona() : Persona("nombre por defecto", 1, 'M') {

}

Persona::Persona(std::string t_nombre, int t_edad, char t_sexo) : Persona(t_nombre, t_edad, t_sexo, 1, 1, 1) {

}

Persona::Persona(std::string t_nombre, int t_edad, char t_sexo, int t_dni, float t_peso, float t_altura) :
    m_nombre{t_nombre},
    m_edad{t_edad},
    m_sexo{t_sexo},
    m_dni{t_dni},
    m_peso{t_peso},
    m_altura{t_altura} {

  std::cout << "constructor" << std::endl;

  assert(t_nombre.size() > 0);
  assert(t_edad > 0);
  assert(t_peso > 0);
  assert(t_altura > 0);
  assert(t_dni > 0);
  assert(t_sexo == 'M' || t_sexo == 'F' || t_sexo == 'X');

}

std::string Persona::get_nombre() {
  return m_nombre;
}

void Persona::set_nombre(const std::string t_nombre) {
  assert(t_nombre.size() > 0);

  m_nombre = t_nombre;
}

void Persona::set_edad(int t_edad) {
  assert(t_edad > 0);
  m_edad = t_edad;
}

int Persona::get_edad() {
  return m_edad;
}

float Persona::calcularIMC() {
  return m_peso / (m_altura * m_altura);
}

int Persona::calcularEdad() {
  // TODO: implementar con fecha
  return m_edad;
}

bool Persona::esMayorDeEdad() {
  return calcularEdad() >= 18;
}


