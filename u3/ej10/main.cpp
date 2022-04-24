#include <iostream>
#include "Matriz.h"

using namespace std;

int main() {

  Matriz a(3);

  a[0] = 3;
  a[1] = 4;
  a[2] = 5;

  cout << a << endl;

  a(2, 0) = 10;
  a(2, 1) = 20;
  a(2, 2) = 30;

  cout << a << endl;

  cout << "a(2, 2): " << a(2, 2) << endl;

  Matriz b(3);

  b(2, 0) = 1;
  b(2, 1) = 1;
  b(2, 2) = 1;

  cout << b << endl;

  Matriz c = a + b;

  cout << "c = a + b" << endl;
  cout << c << endl;

  cout << "c = a - b" << endl;
  c = a - b;

  cout << c << endl;

  Matriz a1(3);
  a1[0] = 1;
  a1[1] = 1;
  a1[2] = 1;

  Matriz a2(3);
  a2(0, 0) = 10;
  a2(0, 1) = 20;
  a2(0, 2) = 30;

  cout << "a1 * a2" << endl;
  cout << a1 * a2 << endl;

  cout << "a2 * a1" << endl;
  cout << a2 * a1 << endl;

  cout << "a1 * a1" << endl;
  cout << a1 * a1 << endl;

  return 0;
}