#include <iostream>
#include <assert.h>

//n! = n * (n-1)!
//5! = 5 * 4!
//4! = 4 * 3!
//3! = 3 * 2!
//2! = 2 * 1!
//1! = 1 * 0!
//0! = 1

using namespace std;

int factorial_recursivo(int);
int factorial_iterativo(int);


int main() {

  cout << "factorial 0: " << factorial_iterativo(0) << endl;
  cout << "factorial 1: " << factorial_iterativo(1) << endl;
  cout << "factorial 2: " << factorial_iterativo(2) << endl;
  cout << "factorial 3: " << factorial_iterativo(3) << endl;
  cout << "factorial 4: " << factorial_iterativo(4) << endl;

  assert(factorial_iterativo(0) == 1);
  assert(factorial_iterativo(1) == 1);
  assert(factorial_iterativo(2) == 2);
  assert(factorial_iterativo(3) == 6);
  assert(factorial_iterativo(4) == 24);

  cout << "factorial 0: " << factorial_recursivo(0) << endl;
  cout << "factorial 1: " << factorial_recursivo(1) << endl;
  cout << "factorial 2: " << factorial_recursivo(2) << endl;
  cout << "factorial 3: " << factorial_recursivo(3) << endl;
  cout << "factorial 4: " << factorial_recursivo(4) << endl;

  assert(factorial_recursivo(0) == 1);
  assert(factorial_recursivo(1) == 1);
  assert(factorial_recursivo(2) == 2);
  assert(factorial_recursivo(3) == 6);
  assert(factorial_recursivo(4) == 24);

  return 0;
}

int factorial_recursivo(int n) {
  if (n == 0) {
    return 1;
  }

  return n * factorial_recursivo(n-1);
}

int factorial_iterativo(int n) {
  int factorial = 1;

  for (int i=1; i<=n; i++) {
    factorial = factorial * i;
  }

  return factorial;
}