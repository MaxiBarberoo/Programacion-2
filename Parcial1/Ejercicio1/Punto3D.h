//
// Created by mbarb on 2/5/2022.
//

#ifndef UCC_2022_PUNTO3D_H
#define UCC_2022_PUNTO3D_H


class Punto3D {
public:
    Punto3D();
    Punto3D(float t_CoordenadaX, float t_CoordenadaY, float t_CoordenadaZ);

    float getCoordenadaX();
    float getCoordenadaY();
    float getCoordenadaZ();

    void setCoordenadaX(float NuevaCoordenadaX);
    void setCoordenadaY(float NuevaCoordenadaY);
    void setCoordenadaZ(float NuevaCoordenadaZ);

    void DesplazarX(float deltaX);
    void DesplazarY(float deltaY);
    void DesplazarZ(float deltaZ);

    float DistanciaEntrePuntos(Punto3D otroPunto);

    bool SonIguales(Punto3D otroPunto);

private:
    float m_CoordenadaX;
    float m_CoordenadaY;
    float m_CoordenadaZ;
};


#endif //UCC_2022_PUNTO3D_H
