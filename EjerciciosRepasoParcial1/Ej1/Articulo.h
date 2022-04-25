//
// Created by mbarb on 25/4/2022.
//

#ifndef UCC_2022_ARTICULO_H
#define UCC_2022_ARTICULO_H


class Articulo {
public:
    Articulo(float t_costoBase);

    float get_PrecioPorMayor();
    float get_PrecioPorMenor();

    void Incrementro(float incremento);

private:
    float m_costoBase;
};


#endif //UCC_2022_ARTICULO_H
