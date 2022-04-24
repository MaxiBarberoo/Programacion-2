#include <iostream>
#include <cassert>
#include <cmath>

using namespace std;

void invertir(int datos[], int n);
void invertir_v2(int datos[], int n);

int main() {

  int datos[] = {7,5,1,3,4,5,2};
  int n = 7;

//  invertir(datos, n);
  invertir_v2(datos, n);

  // -> 2,5,4,3,1,5,7

  cout << "[";

  for (int i = 0; i < n; ++i) {
    cout << " " << datos[i];
  }

  cout << "]" << endl;

  return 0;
}

void intercambiar(int& x, int& y) {
  int temp = x;
  x = y;
  y = temp;
}


void invertir(int datos[], int n) {
  int *datos_invertido = new int[n];

  for (int i = n-1; i >= 0; i--) {
    int j = (n-1) - i;
    datos_invertido[j] = datos[i];
  }

  for (int i = 0; i < n; ++i) {
    datos[i] = datos_invertido[i];
  }
}

void invertir_v2(int datos[],  int n ) {
  for (int i = 0; i < (n/2); ++i) {
    intercambiar(datos[i], datos[(n-1)-i]);
  }
}