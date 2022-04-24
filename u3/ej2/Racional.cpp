//
// Created by Matias Volpe on 28/03/2022.
//

#include <cassert>
#include <iostream>

#include "Racional.h"

using namespace std;

Racional::Racional() : Racional(0) {}

Racional::Racional(int n) : Racional(n, 1) {}

Racional::Racional(int n, int d) : numerador{n}, denominador{d} {
  assert(d != 0);
}

Racional Racional::sumar(const Racional &r) {
  int nuevo_numerador = r.denominador * numerador + denominador * r.numerador;
  int nuevo_denominador = denominador * r.denominador;

  return Racional(nuevo_numerador, nuevo_denominador);
}

Racional Racional::sumar(int i) {
  return sumar(Racional(i));
//  return this->sumar(Racional(i));
}

Racional Racional::operator+(const Racional &r) {
  return sumar(r);
}

Racional Racional::operator+(int i) {
  return sumar(i);
}

Racional Racional::operator-(const Racional &r) {
  return restar(r);
}

Racional Racional::operator-(int i) {
  return restar(i);
}

Racional Racional::restar(int i) {
  return this->restar(Racional(i));
}

Racional Racional::restar(const Racional &r) {
  int nuevo_numerador = r.denominador * numerador - denominador * r.numerador;
  int nuevo_denominador = denominador * r.denominador;

  return Racional(nuevo_numerador, nuevo_denominador);
}

Racional &Racional::incrementar() {
  numerador += denominador;

  return *this;
}

Racional &Racional::decrementar() {
  numerador -= denominador;

  return *this;
}

void Racional::simplificar() {
  int maximo_comun_divisor = mcd(denominador, numerador);

  denominador = denominador / maximo_comun_divisor;
  numerador = numerador / maximo_comun_divisor;
}

int Racional::mcd(int a, int b) {
  a = abs(a);
  b = abs(b);

  if (a < b) {
    int tmp = a;
    a = b;
    b = tmp;
  }

  if (b == 0) {
    return a;
  }

  return mcd(b, a % b);
}

void Racional::imprimir() {
  cout << numerador << "/" << denominador << endl;
}

Racional &Racional::operator++() {
  return incrementar();
}

Racional Racional::operator++(int) {
  Racional copia_de_racional = *this;

  incrementar();

  return copia_de_racional;
}

std::ostream &operator<<(std::ostream &out, const Racional &r) {
  cout << "Racional(" << r.numerador << " / " << r.denominador << ")";

  return out;
}