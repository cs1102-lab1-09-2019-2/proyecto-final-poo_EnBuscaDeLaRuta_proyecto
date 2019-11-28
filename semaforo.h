#ifndef PROGRAMACION_ORIENTADA_A_OBJETOS_SEMAFORO_H
#define PROGRAMACION_ORIENTADA_A_OBJETOS_SEMAFORO_H

#include "implementacion.h"
typedef int Entero;

class semaforo{
private:
        Entero posicion_inicial_x;
        Entero posicion_inicial_y;
        Entero posicion_final_x;
        Entero posicion_final_y;

public:
    semaforo(Entero pfx, Entero pfy, Entero pix, Entero piy);

    Entero getposicion_final_x(){
        return posicion_final_x;
    }
    Entero getposicion_final_y(){
        return posicion_final_y;
    }
    Entero getposicion_inicial_y(){
        return  posicion_inicial_y;
    }
    Entero getposicion_inicial_x(){
        return posicion_inicial_x;
    }

friend  class Mapa;
friend class node;
};

#endif //PROGRAMACION_ORIENTADA_A_OBJETOS_SEMAFORO_H
