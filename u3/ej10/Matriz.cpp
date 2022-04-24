//
// Created by Matias Volpe on 18/04/2022.
//
#include <cassert>
#include <iostream>

#include "Matriz.h"

Matriz::Matriz(int t_filas, int t_columnas) :
    m_filas{t_filas},
    m_columas{t_columnas} {

  assert(t_filas > 0);
  assert(t_columnas > 0);

  m_items = new int *[m_filas];

  for (int i = 0; i < m_columas; ++i) {
    m_items[i] = new int[m_columas];
  }

  for (int i = 0; i < m_filas; ++i) {
    for (int j = 0; j < m_columas; ++j) {
      m_items[i][j] = 0;
    }
  }

}
Matriz::Matriz(int t_tamanio) : Matriz(t_tamanio, t_tamanio) {

}
Matriz::Matriz() : Matriz(1, 1) {}

std::ostream &operator<<(std::ostream &os, const Matriz &matriz) {

  for (int i = 0; i < matriz.m_filas; ++i) {
    for (int j = 0; j < matriz.m_columas; ++j) {
      std::cout << matriz.m_items[i][j] << " ";
    }
    std::cout << std::endl;
  }

  return os;
}

Matriz::~Matriz() {

  for (int i = 0; i < m_columas; ++i) {
    delete[] m_items[i];
  }

  delete[] m_items;

}

int &Matriz::operator()(int fila, int columna) {
  assert(fila >= 0 && fila < m_filas);
  assert(columna >= 0 && columna < m_columas);

  return m_items[fila][columna];
}

int &Matriz::operator[](int indice) {
  assert(m_columas == m_filas);
  assert(indice >= 0 && indice < m_filas);

  return m_items[indice][indice];
}

Matriz Matriz::operator+(const Matriz &otro) {
  assert(m_filas == otro.m_filas);
  assert(m_columas == otro.m_columas);

  Matriz suma(m_filas, m_columas);

  for (int i = 0; i < m_filas; ++i) {
    for (int j = 0; j < m_columas; ++j) {
      suma.m_items[i][j] = m_items[i][j] + otro.m_items[i][j];
    }
  }

  return suma;
}

Matriz Matriz::operator-(const Matriz &otro) {
  assert(m_filas == otro.m_filas);
  assert(m_columas == otro.m_columas);

  Matriz resta(m_filas, m_columas);

  for (int i = 0; i < m_filas; ++i) {
    for (int j = 0; j < m_columas; ++j) {
      resta.m_items[i][j] = m_items[i][j] - otro.m_items[i][j];
    }
  }

  return resta;
}

Matriz::Matriz(const Matriz &otro) :
    m_filas{otro.m_filas},
    m_columas{otro.m_columas} {

  m_items = new int *[m_filas];

  for (int i = 0; i < m_columas; ++i) {
    m_items[i] = new int[m_columas];
  }

  for (int i = 0; i < m_filas; ++i) {
    for (int j = 0; j < m_columas; ++j) {
      m_items[i][j] = otro.m_items[i][j];
    }
  }
}
Matriz &Matriz::operator=(Matriz otro) {
  std::swap(m_items, otro.m_items);

  return *this;
}
Matriz Matriz::operator*(const Matriz &otro) {
  assert(m_columas == otro.m_filas);

  Matriz multiplicacion(m_filas, otro.m_columas);

  for (int i = 0; i < multiplicacion.m_filas; ++i) {
    for (int j = 0; j < multiplicacion.m_columas; ++j) {
      for (int k = 0; k < m_columas; ++k) {
        multiplicacion.m_items[i][j] += m_items[i][k] * otro.m_items[k][j];
      }
    }
  }

  return multiplicacion;
}
