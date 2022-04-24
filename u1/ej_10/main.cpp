#include <iostream>
#include <cassert>
#include <cmath>

using namespace std;

void reorganizar(int datos[], int n);

int main() {

  int datos[] = {1, 2, 3, 4, 5, 6, 7};
  int n = 7;

  reorganizar(datos, n);

  // -> 3,5,2,4

  cout << "[";

  for (int i = 0; i < n; ++i) {
    cout << " " << datos[i];
  }

  cout << "]" << endl;

  return 0;
}

bool es_par(int a) {
  return a%2 == 0;
}

void intercambiar(int& x, int& y) {
  int temp = x;
  x = y;
  y = temp;
}


// int datos[] se pasa por referencia y no por valor
void reorganizar(int datos[], int n) {
  for (int i = 0; i < n; ++i) {
    if (es_par(datos[i])) {
      for (int j = i+1; j < n; ++j) {
        if (!es_par(datos[j])) {
          intercambiar(datos[i], datos[j]);
        }
      }
    }
  }
}
