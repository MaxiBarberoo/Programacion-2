

#ifndef UCC_2022_U3_EJ1_FECHA_H_
#define UCC_2022_U3_EJ1_FECHA_H_

class Fecha {
 public:
  Fecha();
  Fecha(int a, int m, int d);

  void set_dia(int d);

  void set_mes(int m);

  void set_anio(int a);

  int get_dia();

  int get_mes();

  int get_anio();

  void incrementar();

  void decrementar();

  void sumar_dias(int x);

  void restar_dias(int x);

 private:
  void validar_fecha(int a, int m, int d);

  bool es_anio_bisiesto(int anio);

  bool es_ultimo_dia_del_mes();

  int dia;
  int mes;
  int anio;
};

#endif //UCC_2022_U3_EJ1_FECHA_H_
