//
// Created by mbarb on 25/4/2022.
//

#ifndef UCC_2022_PERSONA_H
#define UCC_2022_PERSONA_H
#include <string>
#include "Fecha.h"

class Persona {
public:
    Persona(std::string t_nombre, Fecha t_nacimiento);

    int edad(Fecha hoy);


private:
    std::string m_nombre;
    Fecha m_nacimiento;
};


#endif //UCC_2022_PERSONA_H
