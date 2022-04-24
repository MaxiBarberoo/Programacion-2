//
// Created by Matias Volpe on 14/03/2022.
//

#include <iostream>
#include <cassert>

using namespace std;

int * crear_arreglo(int n) {
  return new int[n];
}

int main() {

  int n;

  cout << "Ingrese n: " << endl;
  cin >> n;

  int *a = crear_arreglo(n);

  for (int i = 0; i < n; ++i) {
    cout << "Ingrese a[" << i << "]: ";
    cin >> a[i];
  }

  for (int i = 0; i < n; ++i) {
    cout << "a[" << i << "]: " << *(a+i) << endl;
  }

  return 0;
}
