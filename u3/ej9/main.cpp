#include <iostream>
#include "Arreglo.h"

using namespace std;

int main() {

  // a + b;
  // a * b;
  // a - b;
  // cout << a[i];
  // a[i] = 1;

  int items[] = {1, 2, 3};
  Arreglo a1(3);
  Arreglo a2(3);

  a1[0] = 1;
  a1[1] = 2;
  a1[2] = 3;

  a2[0] = 4;
  a2[1] = 5;
  a2[2] = 6;

  cout << "a1 ";
  cout << a1 << endl;
  cout << "a2 ";
  cout << a2 << endl;

  cout << "sumar de a1+a2" << endl;
  Arreglo a3;
  a3 = a1 + a2;
  cout << a3 << endl;

  cout << "restar de a1-a2" << endl;
  Arreglo a4;
  a4 = a1 - a2;
  cout << a4 << endl;

  cout << "producto escalar de a1*a2" << endl;
  int producto_escalar = a1 * a2;
  cout << producto_escalar << endl;

  cout << "a1[0] " << a1[0] << endl;
  cout << "a1[1] " << a1[1] << endl;
  cout << "a1[2] " << a1[2] << endl;

  a1[0] = 10;
  cout << "a1 ";
//  a1.visualizar();

  cout << a1 << endl;

  return 0;
}