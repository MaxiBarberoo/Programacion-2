//
// Created by Matias Volpe on 11/04/2022.
//

#ifndef UCC_2022_U3_EJ6_PASSWORD_H_
#define UCC_2022_U3_EJ6_PASSWORD_H_

class Password {
 public:
  Password();
  Password(int t_longitud);

  void set_longitud(int t_longitud);

  void generar_password();

  void visualizar();

  bool es_fuerte();

 private:
  int m_longitud;
  char m_datos[100];

  char generar_caracter_random();
};

#endif //UCC_2022_U3_EJ6_PASSWORD_H_
