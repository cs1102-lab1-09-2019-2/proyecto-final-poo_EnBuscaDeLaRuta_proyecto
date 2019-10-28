#include "mapa.h"
#include "semaforo.h"
#include "implementacion.h"
#include <iostream>

int main() {
    Mapa* map= new Mapa();

    map->actualizarMapa();
    map->dibujarMapa();

    return 0;

}