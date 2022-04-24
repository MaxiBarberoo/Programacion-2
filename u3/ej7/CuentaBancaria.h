//
// Created by Maxi on 24/4/2022.
//

#ifndef UCC_2022_CUENTABANCARIA_H
#define UCC_2022_CUENTABANCARIA_H


class CuentaBancaria {
public:
    CuentaBancaria(int t_numCuenta, float t_saldo, float t_tasaI);

    void CargayMuestra();

    void deposito(float deposito);
    void extraccion(float extraccion);

    void acreditarInteres();


private:
    int m_numCuenta;
    float m_saldo;
    float m_tasaI;
};


#endif //UCC_2022_CUENTABANCARIA_H
