#include <iostream>
#include <cassert>

using namespace std;

class MiClase {
 public:
  MiClase() {
    cout << "constructor por defecto" << endl;
  }

  MiClase(int m): mes{m} {
    cout << "constructor con argumentso" << endl;
    assert(m >= 1 && m <= 12);
  }


  int get_mes() {
    return mes;
  }

  void set_mes(int m) {
    assert(m >= 1 && m <= 12);

    mes = m;
  }

 private:
  int mes {2};
};


int main() {
  MiClase mi_objecto1;
  MiClase mi_objecto2{5};

//  mi_objecto1.mes = 40;

  mi_objecto1.set_mes(4);
  cout  << mi_objecto1.get_mes() << endl;

//  cout << mi_objecto.mi_entero_publico << endl;
//  cout << mi_objecto.get_mi_entero_privado() << endl;


  return 0;
}
