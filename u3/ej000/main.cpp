#include <iostream>
#include <algorithm>
#include <cassert>
#include <cstddef>

using namespace std;

class MiObjeto {
 public:
  int *items;

  MiObjeto() {
    cout << "constructor por defecto" << endl;

    items = new int[5];
  }

  MiObjeto(const MiObjeto &obj) {
    cout << "constructor por copia" << endl;

    items = new int[5];
    std::copy(obj.items, obj.items + 5, items);
  }

//  MiObjeto &operator=(const MiObjeto &obj) {
//    if (this == &obj) {
//      return *this;
//    }
//
//    delete[] items;
//    items = new int[5];
//    std::copy(obj.items, obj.items + 5, items);
//
//    return *this;
//  }

  MiObjeto &operator=(MiObjeto obj) {
    cout << "operador de asignacion =" << endl;

    std::swap(obj.items, items);

    return *this;
  }

  ~MiObjeto() {
    cout << "destructor" << endl;

    delete[] items;
  }
};

void fn(MiObjeto obj) {
  cout << "fn obj por copia" << endl;
}

int main() {
  cout << "Caso 1" << endl;
  {
    MiObjeto obj;
  }

  cout << "Caso 2 - Constructor por copia v1" << endl;
  {
    MiObjeto obj1;
    MiObjeto obj2 = obj1;
  }

  cout << "Caso 2 - Constructor por copia v2" << endl;
  {
    MiObjeto obj1;
    MiObjeto obj2{obj1};
  }

  cout << "Caso 3 - Operador de asignacion" << endl;
  {
    MiObjeto obj1;
    MiObjeto obj2;

    obj1 = obj2;
  }

  {
    cout << "Caso 5 - constructor por copia en parametro por copia" << endl;
    MiObjeto obj;
    fn(obj);
  }

  cout << "fin" << endl;

  return 0;
}
