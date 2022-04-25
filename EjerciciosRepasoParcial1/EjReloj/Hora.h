//
// Created by mbarb on 25/4/2022.
//

#ifndef UCC_2022_HORA_H
#define UCC_2022_HORA_H


class Hora {
public:
    Hora();
    Hora(unsigned int t_horas, unsigned int t_minutos, unsigned int t_segundos);



private:
    unsigned int m_horas, m_minutos, m_segundos;
};


#endif //UCC_2022_HORA_H
