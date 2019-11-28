

#ifndef PROGRAMACION_ORIENTADA_A_OBJETOS_MENU_H
#define PROGRAMACION_ORIENTADA_A_OBJETOS_MENU_H

#include <iostream>
using namespace std;
#include <map>
#include "Mapa.h"
#include <string>

class Menu{
private:
    string a;
    Mapa map= Mapa();
public:
    Menu(){};
    
    void Imprimir_Menu(ostream&os);
};

#endif //PROGRAMACION_ORIENTADA_A_OBJETOS_MENU_H
