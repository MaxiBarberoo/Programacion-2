//
// Created by Matias Volpe on 14/03/2022.
//

#include <iostream>
#include <cassert>

using namespace std;

int ** crear_matriz(int n, int m) {
  int ** a = new int*[n];

  for (int i = 0; i < m; ++i) {
    a[i] = new int[m];
  }

  return a;
}

void mostrar_matriz(int **a, int n, int m) {
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      cout << " " << a[i][j];
    }
    cout << endl;
  }

  cout << endl;
}

int main() {

  int n, m;

  cout << "Ingrese n: " << endl;
  cin >> n;

  cout << "Ingrese m: " << endl;
  cin >> m;

  int ** a = crear_matriz(n, m);


  a[0][0] = 1;
  a[0][1] = 2;
  a[1][0] = 3;
  a[1][1] = 4;

  mostrar_matriz(a, n, m);

  // libero memoria para cada fila
  for (int i = 0; i < n; ++i) {
    delete [] a[i];
  }
  // libero memoria de a
  delete [] a;

//  libero memoria de 1 solo int
//  int *b = new int;
//  delete b;
//  libero memoria de un arreglo de int
//  int *c = new int[2];
//  delete [] c;


  return 0;
}
