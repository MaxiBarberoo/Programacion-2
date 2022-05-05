//
// Created by mbarb on 2/5/2022.
//

#include "TanqueDeAgua.h"
#include <cassert>

TanqueDeAgua::TanqueDeAgua(): TanqueDeAgua(0, 100) {

}

TanqueDeAgua::TanqueDeAgua(float t_contenido, float t_capacidadMaxima): m_contenido{t_contenido}, m_capacidadMaxima{t_capacidadMaxima} {
    assert(t_contenido >= 0 && t_capacidadMaxima >= 0);
}

void TanqueDeAgua::setContenido(float Litros) {
    m_contenido = Litros;
}

void TanqueDeAgua::setCapacidadMaxima(float Litros) {
    m_capacidadMaxima = Litros;
}

float TanqueDeAgua::getContenido() {
    return m_contenido;
}

float TanqueDeAgua::getCapacidadMaxima() {
    return m_capacidadMaxima;
}

void TanqueDeAgua::AgregarLitros(float Litros) {
    float contenidoFinal = m_contenido + Litros;
    assert(contenidoFinal <= m_capacidadMaxima);
    m_contenido = contenidoFinal;
}

void TanqueDeAgua::QuitarLitros(float Litros) {
    float contenidoFinal = m_contenido - Litros;
    assert(contenidoFinal >= 0);
    m_contenido = contenidoFinal;
}

void TanqueDeAgua::QuitarMitad() {
    m_contenido = m_contenido/2;
}

void TanqueDeAgua::Llenar() {
    m_contenido = m_capacidadMaxima;
}

void TanqueDeAgua::Vaciar() {
    m_contenido = 0;
}

float TanqueDeAgua::LitrosParaCapacidadMaxima() {
    return m_capacidadMaxima - m_contenido;
}

bool TanqueDeAgua::EstaLleno() {
    if(m_contenido == m_capacidadMaxima) {
        return true;
    }else{ return false; }
}

bool TanqueDeAgua::EstaVacio() {
    if(m_contenido == 0) {
        return true;
    }else{ return false; }
}
