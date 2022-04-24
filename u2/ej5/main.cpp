//
// Created by Matias Volpe on 14/03/2022.
//

#include <iostream>
#include <cassert>
#include <cstring>

using namespace std;

void transformar_a_mayusculas(char *);
void transformar_a_mayusculas_con_strlen(char *);

int main() {

  char a[10];

  cout << "Ingrese a: ";

  cin >> a;

  // \0 indica fin de cadena de caracteres
  //  a[2] = '\0';
  //  cout << "El valor de a es: " << a << endl;

  transformar_a_mayusculas(a);
//  transformar_a_mayusculas_con_strlen(a);
  cout << "a en mayusculas es: " << a << endl;

  return 0;
}


void transformar_a_mayusculas(char *a) {
  int i = 0;

  while (*(a+i) != '\0') {
    char caracter = *(a+i);

    // si el caracter es minuscula 97 ~ 122 0x61 ~ 0x7a a-z
    if (caracter >= 0x61 && caracter <= 0x7a) {
      *(a+i) =  caracter - 0x20;
    }

    i++;
  }

};

void transformar_a_mayusculas_con_strlen(char *a) {
  for (int i = 0; i < strlen(a); ++i) {
    if (a[i] >= 0x61 && a[i] <= 0x7a) {
      a[i] -= 0x20;
    }
  }
};
