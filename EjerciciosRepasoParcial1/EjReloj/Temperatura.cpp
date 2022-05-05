//
// Created by mbarb on 25/4/2022.
//

#include "Temperatura.h"

Temperatura::Temperatura(float t_temperaturaEnCelsius): m_temperatura_en_celsius{t_temperaturaEnCelsius} {

}

float Temperatura::get_celsius() {
    return m_temperatura_en_celsius;
}

float Temperatura::get_fahrenheit() {
    return (m_temperatura_en_celsius * 9/5 ) + 32;
}

float Temperatura::get_kelvin() {
    return m_temperatura_en_celsius + 273.15;
}
