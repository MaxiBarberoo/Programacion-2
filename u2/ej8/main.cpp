//
// Created by Matias Volpe on 14/03/2022.
//

#include <iostream>
#include <cassert>

using namespace std;

int cantidad_de_vocales_minusculas(char *);

int main() {

  char a[50];

  cout << "Ingrese a: ";

  cin >> a;

  cout << "la candidad de vocales minuscalas en a son: " << cantidad_de_vocales_minusculas(a) << endl;

  return 0;
}

bool es_vocal_minuscula(char a) {
  return a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u';
}

int cantidad_de_vocales_minusculas(char *a) {
  int cantidad = 0;

  char *b = a;

  while (*b != '\0') {
    if (es_vocal_minuscula(*b)) {
      cantidad++;
    }

    b += 1;
  }

  return cantidad;
}