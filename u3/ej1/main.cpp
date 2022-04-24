#include <iostream>
#include <cassert>

#include "Fecha.h"

using namespace std;

void mostrar_fecha(Fecha & f) {
  cout << "fecha: " << f.get_anio() << "-" << f.get_mes() << "-" << f.get_dia() << endl;
}

int main() {

  Fecha f1;

  mostrar_fecha(f1);

  cout << "test para anio bisiesto" << endl;
  Fecha f2{2020, 2, 27};

  mostrar_fecha(f2);
  f2.incrementar();
  mostrar_fecha(f2);
  f2.incrementar();
  mostrar_fecha(f2);
  f2.incrementar();
  mostrar_fecha(f2);
  f2.incrementar();
  mostrar_fecha(f2);
  f2.decrementar();
  mostrar_fecha(f2);
  f2.decrementar();
  mostrar_fecha(f2);
  f2.decrementar();
  mostrar_fecha(f2);
  f2.decrementar();


  cout << "test para fin de anio" << endl;
  Fecha f3{2020, 12, 31};
  mostrar_fecha(f3);
  f3.incrementar();
  mostrar_fecha(f3);
  f3.decrementar();
  mostrar_fecha(f3);
  f3.decrementar();
  mostrar_fecha(f3);
  f3.sumar_dias(2);
  mostrar_fecha(f3);
  f3.restar_dias(2);
  mostrar_fecha(f3);


  return 0;
}
