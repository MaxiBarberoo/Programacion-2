//
// Created by Matias Volpe on 11/04/2022.
//

#ifndef UCC_2022_U3_EJ8_PERSONA_H_
#define UCC_2022_U3_EJ8_PERSONA_H_

#include <string>

class Persona {
 public:
  Persona();
  Persona(std::string t_nombre, int t_edad, char t_sexo);
  Persona(std::string t_nombre, int t_edad, char t_sexo, int t_dni, float t_peso, float t_altura);

  void set_nombre(const std::string t_nombre);
  std::string get_nombre();

  void set_edad(int t_edad);
  int get_edad();

  void set_sexo(char t_sexo);
  char get_sexo();

  void set_dni(int t_dni);
  int get_dni();

  void set_peso(float t_peso);
  float get_peso();

  void set_altura(float t_altura);
  float get_altura();

  float calcularIMC();

  int calcularEdad();

  bool esMayorDeEdad();

 private:
  std::string m_nombre;
  // TODO: cambiar edad por fecha
  int m_edad;
  int m_dni;
  char m_sexo;
  float m_peso;
  float m_altura;
};

#endif //UCC_2022_U3_EJ8_PERSONA_H_
