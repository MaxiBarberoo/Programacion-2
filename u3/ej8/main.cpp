#include <iostream>
#include "Persona.h"

using namespace std;

int main() {
  char nombre[100] = "Matias";

  Persona p1{nombre, 40, 'M', 1234, 80, 1.8};

  cout << "nombre: " << p1.get_nombre() << endl;
  cout << "edad: " << p1.get_edad() << endl;
  cout << "IMC: " << p1.calcularIMC() << endl;
  cout << "es mayor de edad: " << p1.esMayorDeEdad() << endl;

  return 0;
}