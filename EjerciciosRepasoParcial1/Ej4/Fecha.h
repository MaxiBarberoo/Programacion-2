//
// Created by mbarb on 25/4/2022.
//

#ifndef UCC_2022_FECHA_H
#define UCC_2022_FECHA_H


class Fecha {
public:
    Fecha(unsigned int t_dia, unsigned int t_mes, unsigned int t_anio);

    int diferenciaEnAnios(Fecha otra);
private:
    unsigned int m_dia, m_mes , m_anio;
};


#endif //UCC_2022_FECHA_H
