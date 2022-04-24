//
// Created by Matias Volpe on 11/04/2022.
//

#ifndef UCC_2022_U3_EJ9_ARREGLO_H_
#define UCC_2022_U3_EJ9_ARREGLO_H_

class Arreglo {
 public:
  Arreglo();
  Arreglo(int t_tamanio);
  Arreglo(const Arreglo &otro);
  ~Arreglo();

  Arreglo &operator=(Arreglo otro);
  Arreglo operator+(const Arreglo &otro);
  Arreglo operator-(const Arreglo &otro);
  int operator*(const Arreglo &otro);

  int &operator[](int indice);

  void visualizar();

  friend std::ostream &operator<<(std::ostream &os, const Arreglo &arreglo);

 private:
  int m_tamanio;
  int *m_items;
};

#endif //UCC_2022_U3_EJ9_ARREGLO_H_
