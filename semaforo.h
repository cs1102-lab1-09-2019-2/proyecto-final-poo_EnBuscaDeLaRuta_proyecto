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
    semaforo();

    semaforo(Entero posicion_final_x,
            Entero posicion_final_y,
            Entero posicion_inicial_x,
            Entero posicion_inicial_y);

    ~semaforo();

    Entero getposicion_final_x();
    Entero getposicion_final_y();
    Entero getposicion_inicial_y();
    Entero getposicion_inicial_x();
    void imprimirposicion();
    void moverse(Entero posicion_final_x,Entero posicion_final_y,Entero posicion_inicial_x , Entero posicion_incial_y);
    void setPosicion(Entero posicion_final_x,Entero posicion_final_y ,Entero posicion_inicial_x,Entero posicion_inicial_y);


};

#endif //PROGRAMACION_ORIENTADA_A_OBJETOS_SEMAFORO_H
