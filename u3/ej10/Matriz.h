//
// Created by Matias Volpe on 18/04/2022.
//

#ifndef UCC_2022_U3_EJ10_MATRIZ_H_
#define UCC_2022_U3_EJ10_MATRIZ_H_

#include <iostream>

class Matriz {
 public:
  Matriz();
  Matriz(int t_tamanio);
  Matriz(int t_filas, int t_columnas);
  Matriz(const Matriz &otro);
  ~Matriz();

  Matriz &operator=(Matriz otro);

  Matriz operator+(const Matriz &otro);
  Matriz operator-(const Matriz &otro);
  Matriz operator*(const Matriz &otro);
  int &operator[](int indice);
  int &operator()(int fila, int columna);

  friend std::ostream &operator<<(std::ostream &os, const Matriz &matriz);

 private:
  int m_columas = 1;
  int m_filas = 1;
  int **m_items = nullptr;

};

#endif //UCC_2022_U3_EJ10_MATRIZ_H_
