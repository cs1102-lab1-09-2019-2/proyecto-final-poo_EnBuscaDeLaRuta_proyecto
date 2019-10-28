#ifndef PROGRAMACION_ORIENTADA_A_OBJETOS_MAPA_H
#define PROGRAMACION_ORIENTADA_A_OBJETOS_MAPA_H

#include "implementacion.h"
#include "semaforo.h"


typedef int Entero;

const Entero ALTURA =10;
const Entero ANCHO =10;
const Entero NUMERO = 0;

class Mapa{
private:
    Entero altura;
    Entero ancho;
    Entero numero;
    Entero **plano=nullptr;
    //Entero cantSemaforos;
    //semaforo **semaforojr=nullptr;
public:
    Mapa();
    Mapa(Entero altura, Entero ancho);
    virtual ~Mapa();
    Entero getAltura();
    Entero getAncho();
    void dibujarMapa();
    void actualizarMapa();
};

#endif //PROGRAMACION_ORIENTADA_A_OBJETOS_MAPA_H
