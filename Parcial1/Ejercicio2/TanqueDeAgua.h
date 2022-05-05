//
// Created by mbarb on 2/5/2022.
//

#ifndef UCC_2022_TANQUEDEAGUA_H
#define UCC_2022_TANQUEDEAGUA_H


class TanqueDeAgua {
public:
    TanqueDeAgua();
    TanqueDeAgua(float t_contenido, float t_capacidadMaxima);

    void setContenido(float Litros);
    void setCapacidadMaxima(float Litros);

    float getContenido();
    float getCapacidadMaxima();

    void AgregarLitros(float Litros);
    void QuitarLitros(float Litros);
    void QuitarMitad();
    void Llenar();
    void Vaciar();

    float LitrosParaCapacidadMaxima();

    bool EstaLleno();
    bool EstaVacio();


private:
    float m_contenido;
    float m_capacidadMaxima;
};


#endif //UCC_2022_TANQUEDEAGUA_H
