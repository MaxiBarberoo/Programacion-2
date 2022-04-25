//
// Created by mbarb on 25/4/2022.
//

#ifndef UCC_2022_TEMPERATURA_H
#define UCC_2022_TEMPERATURA_H


class Temperatura {
public:
    Temperatura(float m_temperaturaEnCelsius);

    float get_celsius();
    float get_fahrenheit();
    float get_kelvin();

private:
    float m_temperatura_en_celsius;
};


#endif //UCC_2022_TEMPERATURA_H
