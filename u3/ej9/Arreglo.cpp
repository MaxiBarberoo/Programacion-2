//
// Created by Matias Volpe on 11/04/2022.
//

#include <iostream>
#include <cassert>
#include <algorithm>

#include "Arreglo.h"
Arreglo::Arreglo() : Arreglo(0) {

}
Arreglo::Arreglo(int t_tamanio) : m_tamanio{t_tamanio} {
  assert(t_tamanio >= 0);

  m_items = new int[t_tamanio];

  // inicializo todos los items en 0
  for (int i = 0; i < t_tamanio; ++i) {
    m_items[i] = 0;
  }
}

Arreglo::~Arreglo() {
  delete[] m_items;
}

Arreglo Arreglo::operator+(const Arreglo &otro) {
  assert(m_tamanio == otro.m_tamanio);

  Arreglo out(m_tamanio);

  for (int i = 0; i < m_tamanio; ++i) {
    out.m_items[i] = m_items[i] + otro.m_items[i];
  }

  return out;
}

Arreglo Arreglo::operator-(const Arreglo &otro) {
  assert(m_tamanio == otro.m_tamanio);

  Arreglo out(m_tamanio);

  for (int i = 0; i < m_tamanio; ++i) {
    out.m_items[i] = m_items[i] - otro.m_items[i];
  }

  return out;
}
int Arreglo::operator*(const Arreglo &otro) {
  assert(m_tamanio == otro.m_tamanio);

  int out = 0;

  for (int i = 0; i < m_tamanio; ++i) {
    out += m_items[i] * otro.m_items[i];
  }

  return out;
}

int &Arreglo::operator[](int indice) {
  assert(indice >= 0);

  return m_items[indice];
}
Arreglo::Arreglo(const Arreglo &otro) {
  m_tamanio = otro.m_tamanio;
  m_items = new int[otro.m_tamanio];

  std::copy(otro.m_items, otro.m_items + otro.m_tamanio, m_items);
}

Arreglo &Arreglo::operator=(Arreglo otro) {

  std::swap(otro.m_tamanio, m_tamanio);
  std::swap(otro.m_items, m_items);

  return *this;

}

void Arreglo::visualizar() {
  std::cout << "[";
  for (int i = 0; i < m_tamanio; ++i) {
    std::cout << m_items[i] << " ";
  }
  std::cout << "]" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Arreglo &arreglo) {
  os << "[";
  for (int i = 0; i < arreglo.m_tamanio; ++i) {
    os << arreglo.m_items[i] << " ";
  }
  os << "]";

  return os;
}
