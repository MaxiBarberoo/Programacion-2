//
// Created by mbarb on 25/4/2022.
//

#include "Reloj.h"
#include "Temperatura.h"
#include "Hora.h"

#include <iostream>

Reloj::Reloj() {

}

void Reloj::set_hora(Hora hora) {
    m_hora_actual = hora;
}

void Reloj::mostrarHora() {
    std::cout << m_hora_actual.get_horas() << ":" << m_hora_actual.get_minutos() << ":" << m_hora_actual.get_segundos() << std::endl;
}

void Reloj::set_temperatura(Temperatura temperatura) {
    m_temperatura = temperatura;
}

void Reloj::mostrarTemperatura(char unidad_de_temperatura) {
    if(unidad_de_temperatura == 'C'){
        std::cout << m_temperatura.get_celsius() << "C" << std::endl;
    }else if(unidad_de_temperatura == 'F'){
        std::cout << m_temperatura.get_fahrenheit() << "F" << std::endl;
    }else if(unidad_de_temperatura == 'K'){
        std::cout << m_temperatura.get_kelvin() << "K" << std::endl;
    }else{ std::cout << "La unidad Ingresada es Incorrecta" << std::endl; }
}

void Reloj::set_alarma(Hora hora, unsigned int duracion) {
    hora_de_alarma = hora;
    duracion_alarma_enSegundos = duracion;
}

bool Reloj::esta_activa_la_alarma() {
    if(hora_de_alarma.get_segundos() > 40){  // La duracion de la alarma me hace pasar de minuto

        if(hora_de_alarma.get_minutos() != 59) {  // Para que no tenga en cuenta el cambio de horas
            if (m_hora_actual.get_minutos() == hora_de_alarma.get_minutos() + 1){
                if((m_hora_actual.get_segundos() >= 0 && m_hora_actual.get_segundos() <= hora_de_alarma.get_segundos() - 40 )){
                    return true;
                }
            }else if(m_hora_actual.get_minutos() == hora_de_alarma.get_minutos()){
                if(m_hora_actual.get_segundos() >= hora_de_alarma.get_segundos()){
                    return true;
                }
            }
            // Si los minutos son 59 y necesito pasar la hora ⬇
        } else if (m_hora_actual.get_minutos() == 0 && m_hora_actual.get_horas() == hora_de_alarma.get_horas() + 1) {
            if((m_hora_actual.get_segundos() >= 0 && m_hora_actual.get_segundos() <= hora_de_alarma.get_segundos() - 40 )){
                return true;
            }
        }else if(m_hora_actual.get_minutos() == hora_de_alarma.get_minutos() && m_hora_actual.get_horas() == hora_de_alarma.get_horas()){
            if(m_hora_actual.get_segundos() >= hora_de_alarma.get_segundos()){
                return true;
            }
             // Si las horas son 24 y tengo que pasar a las 00:00:00 ⬇
            }else if(hora_de_alarma.get_horas() == 24){
                if(m_hora_actual.get_horas() == 0 && m_hora_actual.get_minutos() == 0){
                    if((m_hora_actual.get_segundos() >= 0 && m_hora_actual.get_segundos() <= hora_de_alarma.get_segundos() - 40 )){
                        return true;
                    }
                }else if(m_hora_actual.get_horas() == hora_de_alarma.get_horas() && m_hora_actual.get_minutos() == hora_de_alarma.get_minutos()){
                    if(m_hora_actual.get_segundos() >= hora_de_alarma.get_segundos()){
                        return true;
                    }
                }
        }
        //Los segundos no me cambian ni los minutos ni las horas ⬇
    }else if(m_hora_actual.get_horas() == hora_de_alarma.get_horas() && m_hora_actual.get_minutos() == hora_de_alarma.get_minutos()){
        if(m_hora_actual.get_segundos() >= hora_de_alarma.get_segundos() && m_hora_actual.get_segundos() <= hora_de_alarma.get_segundos() + 20){
            return true;
        }
    }

}



