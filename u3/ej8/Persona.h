//
// Created by Matias Volpe on 11/04/2022.
//

#ifndef UCC_2022_U3_EJ8_PERSONA_H_
#define UCC_2022_U3_EJ8_PERSONA_H_

class Persona {
 public:
  Persona();
  Persona(char *t_nombre, int t_edad, char t_sexo);
  Persona(char *t_nombre, int t_edad, char t_sexo, int t_dni, float t_peso, float t_altura);
  ~Persona();

  void set_nombre(const char *t_nombre);
  char *get_nombre();

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
  char *m_nombre;
  // TODO: cambiar edad por fecha
  int m_edad;
  int m_dni;
  char m_sexo;
  float m_peso;
  float m_altura;
};

#endif //UCC_2022_U3_EJ8_PERSONA_H_
