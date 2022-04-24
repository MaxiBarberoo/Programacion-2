//
// Created by Matias Volpe on 11/04/2022.
//

#ifndef UCC_2022_U3_EJ6_PASSWORD2_H_
#define UCC_2022_U3_EJ6_PASSWORD2_H_

class Password2 {
 public:
  Password2();
  Password2(int t_longitud);

  void set_longitud(int t_longitud);

  char *generar_password();

  bool es_fuerte(char *password);

 private:
  int m_longitud;

  char generar_caracter_random();
};

#endif //UCC_2022_U3_EJ6_PASSWORD2_H_
