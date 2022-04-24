//
// Created by Matias Volpe on 14/03/2022.
//

#include <iostream>
#include <cassert>

using namespace std;

int main() {
  // Ej 2
  short a[5] = {2,4,6,8,10};

  short * a_ptr = a;

  cout << "sizeof(short): " << sizeof(short) << endl;

  cout << "a_ptr: " << a_ptr << endl;

  cout << "&a[0]: " << &a[0] << " *a_ptr: " << *a_ptr << endl;
  cout << "&a[1]: " << &a[1] << " *(a_ptr+1): " << *(a_ptr+1) << endl;
  cout << "&a[2]: " << &a[2] << " *(a_ptr+2): " << *(a_ptr+2) << endl;
  cout << "&a[3]: " << &a[3] << " *(a_ptr+3): " << *(a_ptr+3) << endl;
  cout << "&a[4]: " << &a[4] << " *(a_ptr+4): " << *(a_ptr+4) << endl;


  // Ej 3

  // No es diferencia en bytes
  // Es la diferencia entre posiciones de memoria
  // que se necesitan para el tipo de dato del puntero
  cout << "&a[4] - &a[0] = " << &a[4] - &a[0] << endl;

  short *primer_item = &a[0];
  short *ultimo_item = &a[4];

  cout << "ultimo_item - primer_item = " << ultimo_item - primer_item << endl;

  return 0;
}