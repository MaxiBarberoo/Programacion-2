#include <iostream>
#include <cassert>
#include "Racional.h"

using namespace std;


int main() {
  Racional r1{1};
  Racional r2{1, 2};

  cout << &r2 << endl;

  Racional r3 = r1.sumar(r2);



  // si no es un puntero uso .
  r3.imprimir();

  // r3++; ++r3;  r4 = r3++;

  Racional r4 = r3.incrementar();
  cout << &r3 << endl;
  cout << &(r3.incrementar()) << endl;
  r3.imprimir();
  cout << &r4 << endl;
  r4.imprimir();

  Racional r5 = r4.sumar(1);
  r5.imprimir();

  Racional r6 = r5.restar(1);
  r6.imprimir();

  Racional r7{4, -2};
  r7.imprimir();
  r7.simplificar();
  r7.imprimir();

  Racional r8{1,2};
  Racional r9{3, 2};
  Racional r10 = r8 - r9;
  Racional r11 = r8.operator-(r9);
  r10.simplificar();
  r10.imprimir();


//  Racional *r4_ptr = &r3;

  // si es un puntero para invocar metodos/datos miembro uso ->
//  r4_ptr->imprimir();
  //  (*r4_ptr).imprimir();

//  r1.incrementar();

  // r3 = r1 + r2;
  // r2 = r1 + 5;


  cout << "pre incrementar" << endl;

  Racional r12{1,2};
  ++r12;
  r12.imprimir();

  cout << "post incrementar" << endl;

  Racional r13{1,2};
  Racional r14 = r13++;
  r13.imprimir();
  r14.imprimir();


  cout << "r13 " << r13 << endl;
  cout << "r14 " << r14 << endl;


  return 0;
}


int sumar_por_copia(int a, int b) {
  cout << &a << endl;
  return a + b;
}

int sumar_por_referencia(const int & a, const int & b) {
  cout << &a << endl;
  return a + b;
}

void main2() {
  int x = 1;
  int y = 2;

  cout << &x << endl;
  cout << sumar_por_copia(x, y) << endl;
  cout << sumar_por_referencia(x, y) << endl;

  cout << x << endl;
}