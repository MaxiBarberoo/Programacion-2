//
// Created by mbarb on 2/5/2022.
//

#include "Punto3D.h"
#include <cmath>

Punto3D::Punto3D(): Punto3D(0, 0, 0) {

}

Punto3D::Punto3D(float t_CoordenadaX, float t_CoordenadaY, float t_CoordenadaZ): m_CoordenadaX{t_CoordenadaX}, m_CoordenadaY{t_CoordenadaY}, m_CoordenadaZ{t_CoordenadaZ} {

}

float Punto3D::getCoordenadaX() {
    return m_CoordenadaX;
}

float Punto3D::getCoordenadaY() {
    return m_CoordenadaY;
}

float Punto3D::getCoordenadaZ() {
    return m_CoordenadaZ;
}

void Punto3D::setCoordenadaX(float NuevaCoordenadaX) {
    m_CoordenadaX = NuevaCoordenadaX;

}

void Punto3D::setCoordenadaY(float NuevaCoordenadaY) {
    m_CoordenadaY = NuevaCoordenadaY;

}

void Punto3D::setCoordenadaZ(float NuevaCoordenadaZ) {
    m_CoordenadaZ = NuevaCoordenadaZ;
}

void Punto3D::DesplazarX(float deltaX) {
    m_CoordenadaX += deltaX;
}

void Punto3D::DesplazarY(float deltaY) {
    m_CoordenadaY += deltaY;
}

void Punto3D::DesplazarZ(float deltaZ) {
    m_CoordenadaZ += deltaZ;
}

float Punto3D::DistanciaEntrePuntos(Punto3D otroPunto) {
    return sqrt(pow(m_CoordenadaX, 2) + pow(m_CoordenadaY, 2) + pow(m_CoordenadaZ, 2));
}

bool Punto3D::SonIguales(Punto3D otroPunto) {
    if(m_CoordenadaX == otroPunto.m_CoordenadaX && m_CoordenadaY == otroPunto.m_CoordenadaY && m_CoordenadaZ == otroPunto.m_CoordenadaZ) {
        return true;
    }else{ return false; }
}
