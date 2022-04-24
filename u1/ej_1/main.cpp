#include <iostream>
#include <assert.h>

#include "calcular_minimo_de_saltos.h"

int main() {
  int x, y, d;
  std::cout << "Ingrese posicion del grillo" << std::endl;

  std::cout << "Ingrese x: ";
  std::cin >> x;

  std::cout << "Ingrese y: ";
  std::cin >> y;

  std::cout << "Ingrese longitud del salto d: ";
  std::cin >> d;

  std::cout << "el minimo de saltos es: " << calcular_minimo_de_saltos(x, y, d) << std::endl;


  assert(calcular_minimo_de_saltos(2, 6, 2) == 2);
  assert(calcular_minimo_de_saltos(2, 7, 2) == 3);
  assert(calcular_minimo_de_saltos(0, 8, 3) == 3);

  return 0;
}
