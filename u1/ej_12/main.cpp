#include <iostream>
#include <cassert>
#include <cmath>

using namespace std;

void ordenar(int datos[], int n);

int main() {

  int datos[] = {7,5,1,3,4,5,2};
  int n = 7;

  ordenar(datos, n);

  // -> 1,2,3,4,5,5,7

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

void ordenar(int datos[], int n) {
  for (int i = 0; i < n-1; i++) {
    for (int j = i+1; j < n ; j++) {
      if (datos[i] >= datos[j]) {
        intercambiar(datos[i], datos[j]);
      }
    }
  }
}


