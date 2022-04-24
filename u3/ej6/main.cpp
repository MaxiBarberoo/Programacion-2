#include <iostream>
#include "Password.h"
#include "Password2.h"

using namespace std;

int main() {

  Password mi_password;

//  mi_password.generar_password();

  mi_password.visualizar();

  mi_password.set_longitud(6);

//  mi_password.generar_password();

  mi_password.visualizar();

  mi_password.generar_password();
  mi_password.visualizar();
  mi_password.generar_password();
  mi_password.visualizar();

  Password2 mi_password2;

  cout << mi_password2.generar_password() << endl;
  cout << mi_password2.generar_password() << endl;
  mi_password2.set_longitud(4);
  cout << mi_password2.generar_password() << endl;
  cout << mi_password2.generar_password() << endl;

  return 0;
}