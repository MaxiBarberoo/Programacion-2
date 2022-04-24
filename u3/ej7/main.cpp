//
// Created by Maxi on 24/4/2022.
//

#include <iostream>
#include "CuentaBancaria.h"
using namespace std;

int main(){
    CuentaBancaria C1(123, 20000, 1.5);

    C1.extraccion(200);
    C1.CargayMuestra();


}