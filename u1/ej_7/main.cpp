#include <iostream>
#include <assert.h>

using namespace std;

void intercambiar(int &a, int &b);

int main() {

  int x = 5;
  int y = 7;

  cout << "antes " << "x: " << x << " y: " << y << endl;

  cout << "&x (main): " << &x << endl;

  intercambiar(x,y);

  cout << "despues " << "x: " << x << " y: " << y << endl;

  return 0;
}

void intercambiar(int& x, int& y) {
  cout << "&x (intercambiar): " << &x << endl;

  int temp = x;
  x = y;
  y = temp;
}
