#include <cassert>
#include "Fecha.h"


int dias_por_mes[] = {0, 31, 28, 31, 30, 31, 30, 31, 30, 30, 31, 30, 31};


Fecha::Fecha() : anio{1900}, mes{1}, dia{1} {}

Fecha::Fecha(int a, int m, int d) : anio{a}, mes{m}, dia{d} {
  validar_fecha(a, m, d);
}


void Fecha::set_dia(int d) {
  validar_fecha(d, mes, anio);
  dia = d;
}

void Fecha::set_mes(int m) {
  validar_fecha(dia, m, anio);
  mes = m;
}

void Fecha::set_anio(int a) {
  validar_fecha(dia, mes, a);
  anio = a;
}

int Fecha::get_dia() {
  return dia;
}

int Fecha::get_mes() {
  return mes;
}

int Fecha::get_anio() {
  return anio;
}

void Fecha::incrementar() {
  // verificar si estoy en el ultimo dia del anio
  if (mes == 12 && dia == dias_por_mes[mes]) {
    anio++;
    mes = 1;
    dia = 1;
    // verificar si estoy en el ultimo dial del mes
  } else if (es_ultimo_dia_del_mes()) {
    mes++;
    dia = 1;
  } else {
    dia ++;
  }
};

void Fecha::decrementar() {
  // primer dia del anio
  if (dia == 1 && mes == 1) {
    anio--;
    mes = 12;
    dia = dias_por_mes[mes];
    // primer dia del mes
  } else if (dia == 1) {
    mes--;
    dia = es_anio_bisiesto(anio) && mes == 2
          ? dias_por_mes[mes] + 1
          : dias_por_mes[mes];
  } else {
    dia--;
  }

};


void Fecha::sumar_dias(int x) {
  for (int i = 0; i < x; ++i) {
    incrementar();
  }
}

void Fecha::restar_dias(int x) {
  for (int i = 0; i < x; ++i) {
    decrementar();
  }
}

void Fecha::validar_fecha(int a, int m, int d) {
  // valido mes
  assert(m >= 1 && m <= 12);

  assert(d >= 1);

  // valido dia
  if (m != 2) {
    assert(d <= dias_por_mes[m]);
  } else {
    assert(
        es_anio_bisiesto(a)
        ? d <= dias_por_mes[m] + 1
        : d <= dias_por_mes[m]);
  }
}

bool Fecha::es_anio_bisiesto(int anio) {
  return ((anio % 4 == 0) && !(anio % 100 == 0)) || (anio % 400 == 0);
}

bool Fecha::es_ultimo_dia_del_mes() {
  if (es_anio_bisiesto(anio) && mes==2) {
    return dia == 29;
  } else {
    return dia == dias_por_mes[mes];
  }
}