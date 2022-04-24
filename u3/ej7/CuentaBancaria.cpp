//
// Created by Maxi on 24/4/2022.
//

#include "CuentaBancaria.h"
#include <cassert>
#include <iostream>
using namespace std;


CuentaBancaria::CuentaBancaria(int t_numCuenta, float t_saldo, float t_tasaI): m_numCuenta(t_numCuenta), m_saldo(t_saldo), m_tasaI(t_tasaI) {
    assert(t_numCuenta > 0);
    assert(t_tasaI > 0);
}

void CuentaBancaria::CargayMuestra() {
    cout << "Ingresar numero de cuenta: ";
    cin >> m_numCuenta;
    cout << "Ingresar Saldo: ";
    cin >> m_saldo;
    cout << "Ingresar tasa de interes: ";
    cin >> m_tasaI;

    cout << "\n Numero de Cuenta: ";
    cout << "Saldo: ";
    cout << m_numCuenta << endl;
    cout << m_saldo << endl;
    cout << "Tasa de Interes: ";
    cout << m_tasaI << endl;

}

void CuentaBancaria::deposito(float deposito) {

    m_saldo = m_saldo + deposito;

}

void CuentaBancaria::extraccion(float extraccion) {

    m_saldo = m_saldo - extraccion;

}
