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
    int a;
    int b;
    int c;
    int d;
    Entero ancho;
    Entero numero;
    Entero **plano=nullptr;
public:
    Mapa();

    Entero getAltura();
    Entero getAncho();
    void dibujarMapa();
    void llenar ();
    void liberar();
    Entero ** getplano() {return plano;}
    int geta(){ return a;}
    int getb(){ return b;}
    int getc(){ return c;}
    int getd(){ return d;}

};

#endif //PROGRAMACION_ORIENTADA_A_OBJETOS_MAPA_H
