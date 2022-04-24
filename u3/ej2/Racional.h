//
// Created by Matias Volpe on 28/03/2022.
//

#ifndef UCC_2022_U3_EJ2_RACIONAL_H_
#define UCC_2022_U3_EJ2_RACIONAL_H_

#include <iostream>

class Racional {
 public:
  Racional();
  Racional(int n);
  Racional(int n, int d);

  Racional sumar(const Racional &r);
  Racional restar(const Racional &r);

  Racional operator+(const Racional &r);
  Racional operator-(const Racional &r);

  Racional &incrementar();
  Racional &decrementar();

  // pre-incrementar
  Racional &operator++();
  // post-incrementar
  Racional operator++(int);

  // sobrecarga sumar/restar
  Racional sumar(int i);
  Racional restar(int i);

  Racional operator+(int i);
  Racional operator-(int i);

  void simplificar();

  void imprimir();

  friend std::ostream &operator<<(std::ostream &out, const Racional &r);

 private:
  int mcd(int a, int b);

  int numerador;
  int denominador;
};

#endif //UCC_2022_U3_EJ2_RACIONAL_H_
