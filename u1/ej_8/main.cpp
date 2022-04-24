#include <iostream>
#include <cassert>
#include <cmath>

using namespace std;

float calcular_polinomio(float coeficientes[], int grado, float x);

const int N = 11;

int main() {

  // para asignar arreglo en forma dinamica
  // float *coeficientes = new float[grado];

  float coeficientes[N];
  float x;
  int grado;

  cout << "Ingrese grado del polinomio" << endl;
  cin >> grado;

  cout << "Ingrese coeficientes" << endl;
  for (int i = 0; i <= grado; ++i) {
    cout << "coeficiente [" << i << "]:";
    cin >> coeficientes[i];
  }


  cout << "Ingrese x" << endl;
  cin >> x;

  cout << "resultado: " << calcular_polinomio(coeficientes, grado, x) << endl;


  return 0;
}


float calcular_polinomio(float coeficientes[], int grado, float x) {
  // assert(grado <= 10 && grado >= 0 && "grado debe ser >= 0 y <= 10");
  assert(grado <= N-1 && grado >= 0);

  float computo = 0;
  for (int i = 0; i <= grado; ++i) {
    computo += coeficientes[i] * pow(x, i);
  }

  return computo;
}