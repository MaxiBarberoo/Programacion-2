#include <iostream>
#include <algorithm>
#include <cassert>
#include <cstddef>

using namespace std;

class MiArreglo {
 public:
  int *data_ptr;
  int size;

  MiArreglo(int t_size = 10) {
    cout << "constructor por defecto" << endl;

    assert(t_size > 0);

    size = t_size;
    data_ptr = new int[t_size];
  }

  MiArreglo(const MiArreglo &that) {
    cout << "constructor por copia" << endl;

    size = that.size;
    data_ptr = new int[size];

    std::copy(that.data_ptr, that.data_ptr + that.size, data_ptr);
  }

//  MiArreglo & operator=(const MiArreglo & that) {
//    cout << "operador de asignacion" << endl;
//
//    if (this == &that) {
//      return *this;
//    }
//
//    if (size != that.size) {
//      delete [] data_ptr;
//
//      size = that.size;
//      data_ptr = new int[size];
//    }
//
//    std::copy(that.data_ptr, that.data_ptr + that.size, data_ptr);
//
//    return *this;
//  }

  MiArreglo &operator=(MiArreglo that) {
    cout << "operador de asignacion" << endl;

    std::swap(size, that.size);
    std::swap(data_ptr, that.data_ptr);

    return *this;
  }

  ~MiArreglo() {
    cout << "destructor" << endl;

    delete[] data_ptr;
  }
};

int main() {
  cout << "Caso 1" << endl;
  MiArreglo mi_objeto1;

  cout << "Caso 2" << endl;
  MiArreglo mi_objeto2{mi_objeto1};

  cout << "Caso 3" << endl;
  MiArreglo mi_objeto3;
  mi_objeto3 = mi_objeto2;

  cout << mi_objeto2.data_ptr << endl;
  cout << mi_objeto3.data_ptr << endl;

  std::size_t n1 = -1;
//  std::size_t n0{-1}; // error: -1 which cannot be narrowed to type 'std::size_t' (aka 'unsigned long')

  cout << sizeof(n1) << endl;

  return 0;
}
