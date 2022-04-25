//
// Created by mbarb on 25/4/2022.
//

#include "Persona.h"
#include "Fecha.h
#include <cassert>

Persona::Persona(std::string t_nombre, Fecha t_nacimiento): m_nombre{t_nombre}, m_nacimiento{t_nacimiento} {
    assert(t_nombre.size() > 0);
}